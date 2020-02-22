#include<stdio.h>
int main()
{
    // First Assignment
 /* int i,inp;
    printf("Enter a number for print its multiplication table : ");
    scanf("%d",&inp);
    for(i=1;i<=inp;i++)
    {
        printf("\n %d * %d = %d ",i,inp,(i*inp));
    }
 */

    // Second Assignment
 /* int limit,i,sum=0;
    printf("\n Enter a limit : ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        if(i%2!=0)
        {
        sum=sum+i;
        }
    }
    printf("\n sum of odd numbers = %d ",sum);
  */

    // Third Assignment
    int i,j;
    for (i=0;i<=5;i++)
    {
        for (j=1;j<=i;j++)
            printf(" %d",j);
        printf("\n");
    }
}