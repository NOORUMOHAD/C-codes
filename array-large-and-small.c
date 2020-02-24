#include<stdio.h>
int main()
{
    int ar[30],lar,sml,i,j,nu;
    printf("\nEnter Array Length : ");
    scanf("%d",&nu);
    printf("\nEnter Array Elements\n");
    for(i=0;i<nu;i++)
    {
        scanf("%d",&ar[i]);
    }
    for (i=0;i<nu;i++)
    {
        for (j=0;j<nu;j++)
        {
            if (ar[i]<ar[j])
            {
                lar=ar[j];
            }
            if (ar[i]>ar[j])
            {
                sml=ar[j];
            }
            
        }
    }
    printf("\nSmallest Number = %d \nLargest Number = %d\n",sml,lar);
}