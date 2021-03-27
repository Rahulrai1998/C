#include<stdio.h>
int main()
{
    int i = 10 ; 
    int *k = 10;
    int **j = &k;

    printf("%d",j);
}