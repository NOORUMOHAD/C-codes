#include <stdio.h>
int main()
{
    struct student
    {
        int roll_no;
        char name[30];
    };
    struct student students_array[10];
    int i,no_of_students;
    printf("\nEnter No Of Students : ");
    scanf("%d",&no_of_students);
    for (i = 0; i < no_of_students; i++)
    {
        printf("\n%d . Enter Roll Number And Name Of Student : \n",i+1);
        scanf("%d %s",&students_array[i].roll_no,students_array[i].name);
        printf("\nRead Sucessfull");
    }
    for (i = 0; i < no_of_students; i++)
    {
        printf("\n%d . Name And Roll Number Of Student  : %s  %d \n",i+1,students_array[i].name,students_array[i].roll_no);
    }
    
}
