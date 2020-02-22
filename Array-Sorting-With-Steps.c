#include<stdio.h>
int main()
{
    int array[1000],i,j,temp=0,limit=0;
    printf("\n Enter array limit : ");
    scanf("%d",&limit);
    printf("\nEnter array elements : \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n array before soriting : ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n\n array sorting step: ");
    
    for(i=0;i<(limit-1);i++)
    {
        for(j=(i+1);j<limit;j++)
        {
            printf("\n Possiont %d %d\tSorting Element %d %d",i,j,array[i],array[j]);
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                printf(" \t\t\t sorted  %d %d ",array[i],array[j]);
            }
        }
    }
        printf("\n\n Sorted Array : ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",array[i]);
    }
            printf("\n");
}