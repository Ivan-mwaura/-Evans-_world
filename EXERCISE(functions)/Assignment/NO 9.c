#include<stdio.h>
#include<conio.h>
int calculate_total( int sum);
void main()
{
    int  i ,tot;
    i = 20 && i<= 70;

     getch();

     tot = calculate_total(i);

     printf("\nThe total sum of the whole numbers between 20 and 70 is %d",tot);
     getch();
}
int calculate_total( int sum)
{
        int total = 0,i;

    for( i = 20; i<= 70; i++)
    {
        total = total + i;
    }
    return(total);
}

