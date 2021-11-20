#include <stdio.h>
int main()
{
    int number;

    printf("\nEnter a number -> ");
    scanf("%f", &number);

    if (number %9 == 0 )
    {
        printf("the number is evenly divisibe . ");
    }
    else
    {
        printf("\nThe number is unevenly divisibe.");
    }
    return 0;
}

