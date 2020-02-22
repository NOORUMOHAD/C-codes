#include<stdio.h>
int main()
{
    int f,s;
    char o;
    printf("\n Enter a calculation : ");
    scanf("%d%c%d",&f,&o,&s);
    printf("\n %d%c%d",f,o,s);
    switch (o)
    {
    case '+': printf("\n %d + %d = %d",f,s,(f+s));
            break;
    case '-': printf("\n %d - %d = %d",f,s,(f-s));
            break;
    case '*': printf("\n %d * %d = %d",f,s,(f*s));
            break;
    case '/': printf("\n %d / %d = %d",f,s,(f/s));
            break;
    default: printf("\n error " );
            break;
    }
    
}