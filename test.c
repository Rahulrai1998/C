#include<stdio.h> 
int main()
{
   int s[3][2] = {
      {1234,56},
      {1212,33},
      {1434,80}
   };
   int i , *pi; 
   int *p = &s;
   
   
   printf("%d",*(p+ 5));
} 
