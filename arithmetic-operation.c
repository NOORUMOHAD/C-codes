#include<stdio.h>
int main()
{	
    int f,s;
    printf("Enter 2 number to calculate\n     ");
    scanf("%d%d",&f,&s);
    printf("\n %d + %d = %d\n",f,s,(f+s));
    printf(" %d - %d = %d\n",f,s,(f-s));
    printf(" %d * %d = %d\n",f,s,(f*s));
    printf(" %d / %d = %d\n",f,s,(f/s));
}