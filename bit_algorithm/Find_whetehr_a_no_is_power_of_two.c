// C Program to find whether a 
// no is power of two 
#include<stdio.h> 
#include<stdbool.h> 
#include<math.h> 
  
/* Function to check if x is power of 2*/
bool isPowerOfTwo(int n) 
{ 
   if(n==0) 
   return false; 
  
   return (ceil(log2(n)) == floor(log2(n))); 
} 
  
// Driver program 
int main() 
{ 
    isPowerOfTwo(31)? printf("Yes\n"): printf("No\n"); 
    isPowerOfTwo(64)? printf("Yes\n"): printf("No\n"); 
    return 0; 
} 
  
// This code is contributed by bibhudhendra 
