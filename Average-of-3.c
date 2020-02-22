#include<stdio.h>
int main()
{
    float num1,num2,num3,result;
    printf(" \n Enter 3 numbers to check average");
    scanf("%f%f%f",&num1,&num2,&num3);
    result=(num1+num2+num3)/3;
    printf("\n Average of the number you entered : %f",result);
}