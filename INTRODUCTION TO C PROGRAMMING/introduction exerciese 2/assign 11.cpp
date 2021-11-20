#include <stdio.h>
#include <math.h>
int main()
{
    float number,square,square_root,cube,cube_root;
     //input a number
     printf("Enter  a number -> ");
     scanf("%f",&number);

     //conversion formulas
     square = number*number;
     square_root = sqrt(number);
     cube = number*number*number;
     cube_root = cbrt(number);


     //print the square
     printf("\n The square is %2f\n" ,square);
     printf("\n The square_root is %2f\n",square_root);
     printf("\n The cube is %2f\n",cube);
     printf("\n The cube_root is %2f\n",cube_root);

     return 0;
}
