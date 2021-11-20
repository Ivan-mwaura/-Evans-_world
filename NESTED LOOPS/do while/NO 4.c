#include<stdio.h>
#include<conio.h>

void main()
{
    int i , j;
    int num,count = 1;

    i = 2;

    do
    {
        j = 1;
        do
        {
            num = j + count;
           printf("%3d",num);
           j++;
        }while(j <= 6);
        count++;

        printf("\n");
        i++;
    }while(i <= 6);
    getch();
}
