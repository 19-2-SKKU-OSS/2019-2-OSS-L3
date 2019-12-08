// C program for Position 
// of rightmost set bit 
#include <math.h> 
#include <stdio.h> 
  
unsigned int getFirstSetBitPos(int n) 
{ 
    return log2(n & -n) + 1; 
} 
  
// Driver code 
int main() 
{ 
    int n = 12; 
    printf("%u", getFirstSetBitPos(n)); 
    getchar(); 
    return 0; 
} 


