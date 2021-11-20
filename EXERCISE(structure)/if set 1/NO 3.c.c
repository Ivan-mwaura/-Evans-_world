#include<stdio.h>
struct Kra
{
    int gross_pay, gross_tax, net_salary;
};
int main()
 {
    struct Kra  pay1;
     printf("Enter the gross_pay -> ");
     scanf("%d", &pay1.gross_pay);


     if (pay1.gross_pay >40000)
     {
         printf("\nThe gross_tax is %d",pay1.gross_tax,pay1.gross_tax = pay1.gross_pay*0.03);
         printf("\nThe net_salary is %d",pay1.net_salary,pay1.net_salary = pay1.gross_pay - pay1.gross_tax);
     }
     else if(pay1.gross_pay >=30000 && pay1.gross_pay <40000)
     {
         printf("\nThe gross_tax is %d",pay1.gross_tax,pay1.gross_tax = pay1.gross_pay* 0.25);
         printf("\nThe net_salary is %d",pay1.net_salary,pay1.net_salary = pay1.gross_pay - pay1.gross_tax);

     }
     else if(pay1.gross_pay >=20000 && pay1.gross_pay <30000)
    {
        printf("\nThe gross_tax is %d",pay1.gross_tax,pay1.gross_tax = pay1.gross_pay* 15/100);
        printf("\nThe net_salary is %d",pay1.net_salary,pay1.net_salary = pay1.gross_pay - pay1.gross_tax);
     }

    else if(pay1.gross_pay>=10000 && pay1.gross_pay <20000)
     {
         printf("\nThe gross_tax is %d",pay1.gross_tax,pay1.gross_pay* 10/100);
         printf("\nThe net_salary is %d",pay1.net_salary,pay1.net_salary = pay1.gross_pay - pay1.gross_tax);
     }
     else if (pay1.gross_pay < 10000)
     {
         pay1.gross_tax == 0;
         printf("\nThe gross_tax is %d",pay1.gross_tax);
         printf("\nThe net_salary is %d",pay1.net_salary,pay1.net_salary = pay1.gross_pay);

     }
     printf("\n\n");

     return 0;

}
