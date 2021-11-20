#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
for(i = 0 ; i <= 50; i = i + 10)
{
    if( i == 0)
    {
        printf(" + ");
    }
    else
        printf("%3d",i);;;;

        for(j = 65;j >= 30;j = j - 5)
        {
            if(j + i == 0)
            {
                printf(" + ");
            }
            else if(j + i <= 10)
            {
                printf("%5d",j + i);
            }
            else
                printf("%5d",j + i);
        }
        printf("\n");
}
getch;
}

