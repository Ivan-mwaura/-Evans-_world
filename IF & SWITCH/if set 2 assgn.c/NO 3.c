#include <stdio.h>
int main()
{
    float income,gender,option,tax,salary;

    printf("\nOption                    gender\n");
    printf("\n1.                         Female\n");
    printf("\n2.                         Male\n   ");

    printf("\nEnter your gender -> ");
    scanf("%f", &option);
    printf("\nEnter your income -> ");
    scanf("%f", &income );

    if(option == 1 && income >= 15000)
    {
        tax = (income - (15000 * 0.14));
    }

    if(option == 1 && income <15000)
    {
        tax = income*0.12;

    }
     else if (option == 2 && income >=14000)
    {
        tax = (income - (14000*0.1));

    }
    else if (option == 2 && income < 14000)
    {
       tax = income *0.13;
    }
    printf("\nThe tax is %.2lf",tax);

    return 0;
}
