#include<stdio.h>
int main(){
    
    int size;
    printf("\nEnter size of array : ");
    scanf("%d",&size);

    int array[size],i,j,temp;

    printf("\nEnter array elements : ");
    for(i=0; i<size ; i++){
        scanf("%d",&array[i]);
    }
    
    printf("\n");
    for(i=0; i<size ; i++){
        printf("%d  ",array[i]);
    }
    printf("\n");

    for (i=0 ; i<size ; i++)
    {
        for ( j = i; j<size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
            
        }
        
    }
    
    printf("\n");
    for(i=0; i<size ; i++){
        printf("%d  ",array[i]);
    }
    
}