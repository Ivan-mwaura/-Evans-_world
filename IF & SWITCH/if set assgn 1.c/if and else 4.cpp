#include <stdio.h>
#include <math.h>
int main()
{
    float num1,num2,result;
     printf("Enter num1 and num2 -> ");
     scanf("%d\n %d\n",&num1,&num2);

     if (num1>num2)
       {
        result = num1/num2;
        printf("%f",result);
       }
     else
        {
           printf("Error");
        }
  return 0;

}
