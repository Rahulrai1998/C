#include<stdio.h>
extern int x;
void fun(){
    x++;
    printf("%d",x);
}
int main(){return 0;}
