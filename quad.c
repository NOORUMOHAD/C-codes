#include<stdio.h>
#include <math.h>
int main()
{ 
  float a,b,c,desc,r1,r2;
  printf("Enter three coefficients \n");
  scanf("%f%f%f",&a,&b,&c);
  desc=(b*b)-(4*a*c);
  if(a==0)
  {
    printf ("Invalid input");
  }
  else
  {
    if (desc==0)
      {
        r1=(-b/(a*2));
        printf("Equal roots=%f",r1);
      }
    else if (desc>0)
     {
       r1=(-b+sqrt(desc))/(2*a);
       r2=(-b-sqrt(desc))/(2*a);
       printf("Root1=%f \nRoot2=%f",r1,r2);
     }
    else
    {
       printf("roots are imaginary");
    }
  }
}