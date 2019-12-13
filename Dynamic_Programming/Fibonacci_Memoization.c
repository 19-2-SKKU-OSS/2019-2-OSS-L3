// C program
#include<stdio.h>
#define MAX 100

//Make fibonacci array
int fib[MAX];

//Initialize fibonacci array
void initialize() {
	for (int i = 0; i < MAX; i++) {
		fib[i] = 0;
	}
}

//Caculate fibonacci array by Memoization
int FIBO(int n) {
	if (fib[n] == 0) {
		if (n <= 1) {
			fib[n] = 1;
		}else{
			fib[n] = FIBO(n-1) + FIBO(n-2);
		}
	}

	return fib[n];
}

//Print fibonacci value
//n is the number you want
int main() {
	int n = 8;

	initialize();
	printf("%d \n", FIBO(n-1));

	return 0;
}
