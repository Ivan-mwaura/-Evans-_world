#include <stdio.h>
int main()
{    int y,sum = 0;
     y = 1;
    while(y <=15 )
    {
        sum =  ( y * y) + sum;
        y++;
    }
     printf("\nThe sum is %d",sum);
    printf("\n\n");

    return 0;


}
