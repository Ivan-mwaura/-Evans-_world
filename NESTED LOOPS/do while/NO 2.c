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
            if( i >= j + 1)
            {
              printf("  ");
            }
            else
             printf("%2d",j);
             j++;
            }while(j<= 6);

             printf("\n");
             i++;
            }while(i <= 6 );

            printf("\n\n");
getch();
}

