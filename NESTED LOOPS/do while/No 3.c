#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;

    i = 2;

    do
    {
        j = 0;
        do
        {
          if(j < i - 1 )
            printf("%3d",j + i );
            j++;
        }while(j <= 6 );

     printf("\n");
     i++;
    }while(i <= 6);

}
