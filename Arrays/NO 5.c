#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    double prod = 0;

    for(i = 1 ; i <= 10; i++)
    {

          prod = prod + (i * i);

          printf("%d * %d = %.0f\n",i ,i,prod);
    }
    getch();
}
