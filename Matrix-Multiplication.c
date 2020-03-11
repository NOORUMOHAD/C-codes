#include<stdio.h>
int main()
{
    int i,j,k=0,ac,ar,bc,br;
    printf("Enter First Matrix's Order : ");
    scanf("%d%d",&ar,&ac);
    printf("\n\t %d X %d",ar,ac);
    printf("\nEnter Second Matrix's Order : ");
    scanf("%d%d",&br,&bc);
    printf("\n\t %d X %d",br,bc);

    int a[ar][ac],b[br][bc];
    int r[ar][bc];

    // Getting Fitst Matrix
    printf("\n\nEnter First Matrix Elements : \n");
    for (i=0;i<ar;i++)
    {
        for (j=0;j<ac;j++)
        {
            scanf("%d",&a[i][j]);
            printf("");
        }
        printf("\n");
    }

    printf("\n\nFirst Matrix \n");

    // Putting First Matrix
    for (i=0;i<ar;i++)
    {
        for (j=0;j<ac;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    // Getting Second Matrix
    printf("\n\nEnter Second Matrix Elements : \n");
    for (i=0;i<br;i++)
    {
        for (j=0;j<bc;j++)
        {
            scanf("%d",&b[i][j]);
            printf("");
        }
        printf("\n");
    }

    // Putting Second Matrix
    printf("\n\nSecond Matrix \n");
    for (i=0;i<br;i++)
    {
        for (j=0;j<bc;j++)
        {
              printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("\n");


    // Multiplying matrix
    int sum=0;
    for (i=0;i<ac;i++)
    {
        for (k=0;k<bc;k++)
        {
            for (j=0;j<br; )
            {
                sum=sum+(a[k][j]*b[j][i]);
                j++;
            }
            r[i][k]=sum;
            sum=0;
        }
    }
        printf("\nResult : \n");

    // Putting Result
    for (i=0;i<ar;i++)
    {
        for (j=0;j<br;j++)
        {
            printf("%d \t",r[i][j]);
        }
        printf("\n");
    }
}
