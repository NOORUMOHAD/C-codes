#include<stdio.h>
int main()
{
    int a=5,b=2;
    printf("1.  a : %d  b : %d \n",a,b);
    a=a+b;//  5+2  =  7
    b=a-b;//  7-2  =  5
    a=a-b;//  7-5  =  2
    printf("2.  a : %d  b : %d",a,b);
}