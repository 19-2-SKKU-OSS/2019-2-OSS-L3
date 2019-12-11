//MEDIAN.C

#include<stdio.h>
#include<math.h>

void main()
{
	int* a;
	int n, i, j, temp;
	double mean,median;
	printf("Enter the number of Random Numbers(0 ~ 99) : ");
	scanf("%d", &n);
	a = (int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	printf("Random Numbers Generated are : "); //랜덤으로 생성된 숫자를 커널창에 나타나진다
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("\nSorted Data :");
	for(i=0;i<n - 1;i++)
	{
		for(j=0;j<n - i - 1;j++)
		{
			if(a[j + 1]<a[j])
			{
				temp=a[j + 1];//임시적으로 저장할 공간을 만드는 변수이다
				a[j + 1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	if(n%2==0)
	{
		median = (a[n/2]+a[(n/2)-1]) / (double)2;//중간값을 저장하는 변수에 중간값을 저장한다
	}
	else
	{
		median=a[n/2];
	}
	printf("\nMedian is : %lf",median);//중간값을 출력한다
	getch();
}
