#include <stdio.h>
int main()
{
    float number;

     printf("\nEnter a number -> ");
     scanf("%d", &number);

     if(number > 0)
     {
         printf("\nThe number is positive.");
     }
     else if(number == 0)
     {
         printf("\nThe number is zero.");
     }
     else
     {
         printf("\nThe number is  negative. ");
     }
     printf("\n\n");

     return 0;
}
