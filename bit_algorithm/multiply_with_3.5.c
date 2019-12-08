#include <stdio.h> 


// multiply a number with 3.5 
int multiplyWith3Point5(int x) 
{ 
  return ((x<<3) - x)>>1; 
}  

// Driver program to test above functions
int main() 
{ 
    int x = 4;  
    printf("%d", multiplyWith3Point5(x)); 
    getchar(); 
    return 0; 
}
