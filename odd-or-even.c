#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter a number to check Even or Odd = ");
    scanf("%d",&a);
    if(a%2==0)
      printf("\n the number is even \n");
        else if(a%2!=0)
          printf("\n the number is odd \n");
            else
              printf("\n Error \n ");
}