#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
    int emp_no;
    char emp_name[30];
    char dep_name[20];
    int salary;
    
} Emp;

int main()
{
    int i, n=20;
 
    Emp emps[n];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details",n);
    for(i=0; i<n; i++)
    {
 
        printf("\n");
    
        printf("Employee %d:- \n",i+1);
        // emp no
        printf("Employee no: ");
        scanf("%d",&emps[i].emp_no);
        // emp name
        printf("Employee name: ");
        scanf("%s",emps[i].emp_name);
        // dep name
        printf("Department name: ");
        scanf("%s",emps[i].dep_name);
        //salary
        printf("Salary: ");
        scanf("%d",&emps[i].salary);
        printf("\n");
    }
 
    //Displaying Employee details
 
    printf("--------------Details of all employees---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Employee No: ");
        printf("%d\n",emps[i].emp_no);
 
        printf("Employee Name: ");
        printf("%s\n",emps[i].emp_name);
         
        printf("Department Name: ");
        printf("%s\n",emps[i].dep_name);
 
        printf("Salary: ");
        printf("%d\n",emps[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}