#include<stdio.h>
#include<stdbool.h>



bool oppositesign(int a, int b){
	bool sign = ((a^b)<0);
	return sign;
}

int main(){
	int a=1, b=-1;
	bool sign = oppositesign(a, b);
	if(sign == true){
		printf("opposite\n");
	}else{
		printf("not opposite\n");
	}
}

