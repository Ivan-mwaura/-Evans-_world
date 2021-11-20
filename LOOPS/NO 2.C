#include <stdio.h>
int main()
{
    int y, cube = 1;
    double square = 1;
    for(y = 2;y <=10;y++)
    {
        square = square * y * y;
        cube = cube * y * y * y;
    }
    printf("\tNUmber = %d",y);
    printf("\tsquare = %f",square);
    printf("\tcube = %d",cube);

    printf("\n\n");

    return 0;
}
