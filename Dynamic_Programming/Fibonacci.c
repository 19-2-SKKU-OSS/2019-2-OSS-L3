//Fibonacci Series using Recursion 
#include<stdio.h> 
int fib(int n) 
{ 
if (n <= 1) 
	return n; 
return fib(n-1) + fib(n-2); //recursive function
} 

int main () 
{ 
int n ;
scanf("%d,&n);
printf("%d", fib(n)); 
getchar(); 
return 0; 
} 
========================================
//Fibonacci Series using Recursion 
#include<bits/stdc++.h> 
using namespace std; 

int fib(int n) 
{ 
	if (n <= 1) 
		return n; 
	return fib(n-1) + fib(n-2); 
} 

int main () 
{ 
	int n = 9; 
	cout << fib(n); 
	getchar(); 
	return 0; 
} 

// This code is contributed 
// by Akanksha Rai 
