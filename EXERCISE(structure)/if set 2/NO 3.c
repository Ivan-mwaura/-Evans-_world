#include <stdio.h>
  struct Kra
{
    float income,gender,option,tax,salary;
};
int main()
{
    struct Kra   payer1;

    printf("\npayer1.option                    gender\n");
    printf("\n1.                         Female\n");
    printf("\n2.                         Male\n   ");

    printf("\nEnter your gender -> ");
    scanf("%f", &payer1.option);
    printf("\nEnter your income -> ");
    scanf("%f", &payer1.income);

    if(payer1.option == 1 && payer1.income >= 15000)
    {
        payer1.tax = (payer1.income - (15000 * 0.14));
    }

    if(payer1.option == 1 && payer1.income <15000)
    {
        payer1.tax = payer1.income*0.12;

    }
     else if (payer1.option == 2 && payer1.income >=14000)
    {
        payer1.tax = (payer1.income - (14000*0.1));

    }
    else if (payer1.option == 2 && payer1.income < 14000)
    {
       payer1.tax = payer1.income *0.13;
    }
    printf("\nThe tax payable is %.2lf",payer1.tax);

    return 0;
}
