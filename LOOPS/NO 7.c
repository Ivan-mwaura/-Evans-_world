#include <stdio.h>
int main()
{
    int x,product;
    double prod = 1;
    for (x  = 1; x <= 6; x++)
    {
       product = x * x;
       printf("\n%d",x);
       printf("\t% * x");
       printf("\t%d",x);
       printf("\t%d",product);

    }
    printf("\n\n");
}
