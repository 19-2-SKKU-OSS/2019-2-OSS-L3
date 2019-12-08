#include <stdio.h> 
  
// unsets the rightmost set bit 
// of n and returns the result 
int fun(unsigned int n) 
{ 
    return n & (n - 1); 
} 
  
// Driver Code 
int main() 
{ 
    int n = 7; 
    printf("The number after unsetting the"); 
    printf(" rightmost set bit %d", fun(n)); 
    return 0; 
} 
