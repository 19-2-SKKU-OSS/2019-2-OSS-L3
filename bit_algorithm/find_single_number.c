#include <stdio.h> 
#define INT_SIZE 32 
  
int getSingle(int arr[], int n) 
{ 
    // Initialize result 
    int result = 0; 
  
    int x, sum; 
  
    // Iterate through every bit 
    for (int i = 0; i < INT_SIZE; i++) 
    { 
      // Find sum of set bits at ith position in all 
      // array elements 
      sum = 0; 
      x = (1 << i); 
      for (int j=0; j< n; j++ ) 
      { 
          if (arr[j] & x) 
            sum++; 
      } 
  
      // The bits with sum not multiple of 3, are the 
      // bits of element with single occurrence. 
      if (sum % 3) 
        result |= x; 
    } 
  
    return result; 
} 
  
// Driver program to test above function 
int main() 
{ 
    int arr[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("The element with single occurrence is %d ", 
            getSingle(arr, n)); 
    return 0; 
}
