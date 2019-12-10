#include<stdio.h> 
#include<stdlib.h> 

// Structure for a pair 
struct pair 
{ 
int a; 
int b; 
}; 

// This function assumes that arr[] is sorted in increasing order 
// according the first (or smaller) values in pairs. 
int maxChainLength( struct pair arr[], int n) 
{ 
int i, j, max = 0; 
int *mcl = (int*) malloc ( sizeof( int ) * n ); 

/* Initialize MCL (max chain length) values for all indexes */
for ( i = 0; i < n; i++ ) 
	mcl[i] = 1; 

/* Compute optimized chain length values in bottom up manner */
for ( i = 1; i < n; i++ ) 
	for ( j = 0; j < i; j++ ) 
		if ( arr[i].a > arr[j].b && mcl[i] < mcl[j] + 1) 
			mcl[i] = mcl[j] + 1; 

// mcl[i] now stores the maximum chain length ending with pair i 

/* Pick maximum of all MCL values */
for ( i = 0; i < n; i++ ) 
	if ( max < mcl[i] ) 
		max = mcl[i]; 

/* Free memory to avoid memory leak */
free( mcl ); 

return max; 
} 


/* Driver program to test above function */
int main() 
{ 
	struct pair arr[] = { {5, 24}, {15, 25}, 
						{27, 40}, {50, 60} }; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printf("Length of maximum size chain is %d\n", 
		maxChainLength( arr, n )); 
	return 0; 
} 
