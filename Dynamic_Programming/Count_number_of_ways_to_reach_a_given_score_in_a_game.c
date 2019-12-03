// A C program to count number of possible ways to a given score 
// can be reached in a game where a move can earn 3 or 5 or 10 
#include <stdio.h> 

// Returns number of ways to reach score n 
int count(int n) 
{ 
	// table[i] will store count of solutions for 
	// value i. 
	int table[n+1], i; 

	// Initialize all table values as 0 
	memset(table, 0, sizeof(table)); 

	// Base case (If given value is 0) 
	table[0] = 1; 

	// One by one consider given 3 moves and update the table[] 
	// values after the index greater than or equal to the 
	// value of the picked move 
	for (i=3; i<=n; i++) 
	table[i] += table[i-3]; 
	for (i=5; i<=n; i++) 
	table[i] += table[i-5]; 
	for (i=10; i<=n; i++) 
	table[i] += table[i-10]; 

	return table[n]; 
} 


// Driver program 
int main(void) 
{ 
	int n = 20; 
	printf("Count for %d is %d\n", n, count(n)); 

	n = 13; 
	printf("Count for %d is %d", n, count(n)); 
	return 0; 
}
