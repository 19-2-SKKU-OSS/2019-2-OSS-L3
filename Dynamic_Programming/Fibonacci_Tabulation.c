//C program
#include<stdio.h>

//Caculate Fibonacci by Tabulation
int FIBO(int n) {
	int*fib = malloc(sizeof(int));
	int i;
	
  fib[0] = 1;
	fib[1] = 1;
	for (i = 2; i < n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	return fib[n-1];
}

// n is the number you want to know
int main() {
	int n = 8;
	printf("%d\n", FIBO(n));

	return 0;
}
