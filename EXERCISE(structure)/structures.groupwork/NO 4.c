#include<stdio.h>
#include<conio.h>
struct Employee
{
    char s_name[10],mid_name[10];
    int emp_num;
    float basic_salary,net_salary,allowances,gross_salary,Tax;
};
void main()
{
    struct Employee emp[40];
    int i,num;

    printf("\nEnter the number of employees you want to work with ->");
    scanf("%d",&num);
    system("CLS");

    for(i = 1; i <= num; i++)
    {
        printf("\nEnter the employees surname ->");
        scanf("%s",emp[i].s_name);
        printf("\nEnter the employees middle_name ->");
        scanf("%s",emp[i].mid_name);
        printf("\nEnter the employees number ->");
        scanf("%d",&emp[i].emp_num);
        printf("\nEnter the employees basic salary ->");
        scanf("%f",&emp[i].basic_salary);
        printf("\nEnter the employees alowances ->");
        scanf("%f",&emp[i].allowances);

        system("CLS");
    }
    for(i = 1; i <= num; i++)
    {
        printf("\nSurname -> %s\n",emp[i].s_name);
        printf("\nMiddle name -> %s\n",emp[i].mid_name);
        printf("\nEmployees number is -> %d\n",emp[i].emp_num);
        printf("\nbasic salary is -> %f\n",emp[i].basic_salary);
        printf("\nAllowances are -> %f\n",emp[i].allowances);

               system("CLS");

        emp[i].gross_salary = emp[i].basic_salary - emp[i].allowances;

        if(emp[i].gross_salary < 10000)
        {
            emp[i].Tax = 0.5 * emp[i].gross_salary;
            emp[i].net_salary = emp[i].gross_salary - emp[i].Tax;
            printf("\nThe employees gross_salary is : %f\n",emp[i].gross_salary);
            printf("\nThe employees tax is : %f\n",emp[i].Tax);
            printf("\nThe employees net salary is :%f\n",emp[i].net_salary);
        }
        else if(emp[i].gross_salary >10000 && emp[i].gross_salary <= 20000)
        {
            emp[i].Tax = 10.0/100 * emp[i].gross_salary;
            emp[i].net_salary = emp[i].gross_salary - emp[i].Tax;
            printf("\nThe employees gross_salary is : %f",emp[i].gross_salary);
            printf("\nThe employees tax is : %f",emp[i].Tax);
            printf("\nThe employees net salary is :%f",emp[i].net_salary);
        }
        else if(emp[i].gross_salary > 20000)
        {
            emp[i].Tax = 10.0/100 * emp[i].gross_salary;
            emp[i].net_salary = emp[i].gross_salary - emp[i].Tax;
            printf("\nThe employees gross_salary is : %f",emp[i].gross_salary);
            printf("\nThe employees tax is : %f",emp[i].Tax);
            printf("\nThe employees net salary is :%f",emp[i].net_salary);
        }
        getch();
    }

}
