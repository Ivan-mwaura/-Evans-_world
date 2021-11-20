#include <stdio.h>
#include <math.h>

int main()

{
    float  x,y;

    printf("\nEnter the value of x -> ");
    scanf("%f", &x);

    if(x >5)
    {
        printf("\nThe value of y is %f" ,y,y = (4 * x * x * x ) + (4 * x) - 6);
    }
    else if(x <5)
    {
        printf("\nThe value of y is %f",y,y = (3 * x * x) -(4 * x )+ 12);
    }
    else if(x = 5)
    {
        printf("\nThe value of y is %,2lf",y,y = (6 * x) - 5);
    }
    printf("\n\n");

    return 0;

}
