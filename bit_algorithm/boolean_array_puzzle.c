  
#include<stdio.h>

void changeToZero(int a[2]) 
{ 
   a[ a[1] ] = a[ !a[1] ]; 
} 
  
int main() 
{ 
   int a[] = {1, 0}; 
   changeToZero(a); 
  
   printf(" arr[0] = %d \n", a[0]); 
   printf(" arr[1] = %d ", a[1]); 
   getchar(); 
   return 0; 
} 
