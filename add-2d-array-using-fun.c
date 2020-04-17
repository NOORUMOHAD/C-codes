#include<stdio.h>
void get_array(int size, int array[size][size]);
void display(int size, int array[size][size]);
void add_array(int size, int array_1[size][size], int array_2[size][size]);
int main(){
    int size;
    printf("\nEnter size of array : ");
    scanf("%d",&size);
    int array_1[size][size],array_2[size][size];
    printf("\nEnter first array elements : \n");
    // array_1[size][size] = 
    get_array(size,array_1);
    printf("\nelements of first array as follows");
    display(size,array_1); 
    printf("\nEnter second array elements : \n");
    // array_2[size][size] = 
    get_array(size,array_2);
    printf("\nelements of second array as follows");
    display(size,array_2);
    add_array(size,array_1,array_2);
}
void get_array(int size, int array[size][size]){
    int i,j;
    for (i=0;i<size;i++)
    {
        for (j=0;j<size;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    // return **array;
}
void display(int size,int array[size][size]){
    int i,j;
    for (i=0;i<size;i++)
    {
        printf("\n");
        for (j=0;j<size;j++)
        {
            printf("%d   ",array[i][j]);
        }
    }
        printf("\n");
}
void add_array(int size, int array_1[size][size], int array_2[size][size]){
    int i,j;
    for (i=0;i<size;i++)
    {
        printf("\n");
        for (j=0;j<size;j++)
        {
            printf("%d  ",array_1[i][j]+array_2[i][j]);
        }
    }
    printf("\n");
}