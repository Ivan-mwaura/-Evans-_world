#include<stdio.h>
#include<conio.h>
void main()
{
    int i , j;

    i = 1;

    do
    {
        j = 1;
          do
          {
              if(j <= i)
                printf("%2d",j);
                j++;
          }while(j <= 5);

     printf("\n");
     i++;
    }while(i <= 5 );
getch();
}

