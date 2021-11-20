#include <stdio.h>
int main()
{
    float num,i;
    printf("\nEnter a number ->");
    scanf("%f",&num);
    for(i = 1; i<= num / 2 ; i = i+ 0.01)
   if( num <= i * i)
    {
    printf("\nThe square_root of %f is %f",num,i);
    break;
    }

    printf("\n\n");

    return 0;

}

