#include<stdio.h>
int main()
{
    // First Assignment
  /*
    int ar1[100],ar2[100],temp,i,j,limit;
    printf("\nEnter size of array : ");
    scanf("%d",&limit);
    printf("\nEnter first array values \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&ar1[i]);
    }
    printf("\n\nEnter Second array values \n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&ar2[i]);
    }
    printf(" \n First array is : ");
    for(i=0;i<limit;i++)                // Print the values of first array
    {
        printf("%d ",ar1[i]);
    }
    printf(" \n\n Second array is : ");
    for(i=0;i<limit;i++)                // Print the values of second array
    {
        printf("%d ",ar2[i]);
    }
    for(i=0;i<limit;i++)
    {
        temp=ar1[i];
        ar1[i]=ar2[i];
        ar2[i]=temp;
    }
    printf(" \n\nArray after swapping \n");
    printf(" \n First array is : ");
    for(i=0;i<limit;i++)                // Print the values of first array
    {
        printf("%d ",ar1[i]);
    }
    printf(" \n\n Second array is : ");
    for(i=0;i<limit;i++)                // Print the values of second array
    {
        printf("%d ",ar2[i]);
    }
    printf("\n");
  */


    // Second Assignment
  /*
    int array[1000],limit,i,count=0;
    printf("\nEnter size of array : ");
    scanf("%d",&limit);
    printf("\nEnter array elements : ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2==0)
        {
            count++;
        }
    }
    printf("\n Even numbers in the array are = %d \n",count);
  */


    // Third Assignment
    int array[100],i,j,limit,temp;
    printf("\nEnter array size : ");
    scanf("%d",&limit);
    printf("\nEnter array elements : ");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n Array before sorting : ");
    for (i=0;i<limit;i++)                   // Display array 
    {
        printf("%d ",array[i]);
    }

    for(i=0;i<(limit-1);i++)
    {
        for(j=(i+1);j<limit;j++)
        {
            if(array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
        printf("\n\n\n Array after sorting : ");
    for (i=0;i<limit;i++)                   // Display array 
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}