#include <stdio.h>
#include <math.h>
int main()
{
    float ID,hours,earning_hour,salary;

    printf("Enter the employees ID (max 10 characters) ->  ");
    scanf("%f",&ID);
    printf("\n Enter the Employees earning_hour -> ");
    scanf("%f",&earning_hour);
    printf("\n Enter employees hours -> ");
    scanf("%f",&hours);

    salary = earning_hour * hours ;

    printf("\n The salary is %2f\n",salary);

    return 0;


}










