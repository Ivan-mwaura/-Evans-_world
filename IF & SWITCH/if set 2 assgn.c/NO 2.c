#include <stdio.h>
#include <math.h>

int main()
{
    float gross_salary,net_tax,net_salary;

    printf("Enter the gross_pay -> ");
    scanf("%f",&gross_salary);

    if(gross_salary>=20000)
    {
        net_tax=(gross_salary-(20000 * 15.0/100));
        net_salary=gross_salary-net_tax;
    }
    else if(gross_salary>=10000 && gross_salary <20000)
    {
        net_tax=(gross_salary-(10000*10/100));
        net_salary=gross_salary-net_tax;
    }
    else if (gross_salary < 10000)
    {

        net_tax = 0;
        net_salary = gross_salary;
    }
    printf("\nThe net_tax is %.2lf",net_tax);
    printf("\nThe net_salary is %.2lf",net_salary);

    return 0;
}
