#include<stdio.h>
int main()
{
    int x, X,Y;

    x = 2;
    printf("Number        square          cube");

    do
    {
        printf("\nx = %d",x);
        X = x * x;
        Y = x *x * x;
        printf("\t\tX = %d",X);
        printf("\t\tY = %d",Y);

        x++;
    }while(x <= 10);
    printf("\n\n");

    return 0;
}
