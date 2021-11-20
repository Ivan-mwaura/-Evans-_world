#include <stdio.h>
#include <math.h>
int main()
{
    float number_one,number_two,number_three,sum,product,average;

    printf("Enter number_one -> ");
    scanf("%f",&number_one);
    printf("Enter number_two -> ");
    scanf("%f",&number_two);
    printf("Enter number three -> ");
    scanf("%f",&number_three);
     sum = number_one + number_two + number_three;
     product = number_one * number_two * number_three;
     average = ((number_one + number_two + number_three)/3);

     printf("\n The sum is %.2f");
     printf("\n The product is %.2f",product);
     printf("\n The average is %.2f",average);




}
