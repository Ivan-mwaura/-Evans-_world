#include<stdio.h>
#include<conio.h>
float calc_tax(float gross_pay);
void main()
{
    float gp,tx,np;

    printf("Enter the gross pay ->");
    scanf("%f", &gp);

    tx = calc_tax(gp);

    printf("\nThe Tax payable is : %f",tx);
    getch();
}
float calc_tax(float gross_pay)
{
    float tax ,net_pay;
    {
        if(gross_pay > 50000);
        {
            tax = 35.0/100 * gross_pay;
            net_pay = gross_pay - tax;
            printf("\nThe net_pay is : %.2f",net_pay);
            return(tax);
        }

        if(gross_pay >=20000 && gross_pay < 40000)
        {
            tax = 30.0/100 * gross_pay;
            net_pay = gross_pay - tax;
            printf("\nThe net_pay is : %.2f\n",net_pay);
            return(tax);
        }
        else if(gross_pay >=12000 && gross_pay < 20000)
        {
            tax = 15.0/100 * gross_pay;
            net_pay = gross_pay - tax;
            printf("\nThe net_pay is : %.2f",net_pay);
            return(tax);
        }
        else
        {
          tax = 0;
          net_pay = gross_pay;
          printf("\nThe net_pay is : %.2f",gross_pay);
        }


    }


}

