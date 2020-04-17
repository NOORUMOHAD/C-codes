#include<stdio.h>
int main(){    
    // getting array size 
    int nu;
    printf("\n Enter size of array : ");
    scanf("%d",&nu);

    // declaring and initializing variables
    int arr[nu],i,search,res_count = 0;
    
    // getting array
    printf("\nEnter Array Elements: \n");
    for(i=0;i<nu;i++){
        scanf("%d",&arr[i]);
    }

    // putting array
    printf("\n");
    for(i=0;i<nu;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");

    // getting search key
    printf("\nEnter search key : ");
    scanf("%d",&search);

    printf("\n");
    // searching the value in array
    for(i=0;i<nu;i++){
        if(arr[i] == search){
            res_count++;
            printf("%d.  found %d at index of %d \n",res_count,arr[i],i);
        }
    }
    if ( res_count == 0 )
    {
        printf("\n%d not found in the array \n\n",search);
    }
        else
        {
            printf("\n");
        }
        
    
}