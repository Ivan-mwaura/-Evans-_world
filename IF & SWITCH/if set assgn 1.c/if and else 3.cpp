#include <stdio.h>
#include <math.h>
 int main ()
 {
     float num1,num2, result;

     printf("Enter the first and second numbers: ");
     scanf("\n %f \n %f", &num1,&num2);
     if(num1 > num2)
        {
        result= num1 - num2;
        printf("\n%f",result);
        }
     else if(num2 > num1)
     {
         result = num2 - num1;
         printf("\n%f",result);
     }
     else
    {
        result = num2+num1;
      printf("%f",result);
     }
 return 0;
 }
