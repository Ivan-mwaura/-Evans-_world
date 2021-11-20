#include <stdio.h>
#include<math.h>
int main()
{   
    float number_one,number_two,quotient,product,sum;
	
	printf("Enter number one -> ");
	scanf("%f",&number_one);
	printf("Enter number_two -> ");
	scanf("%f",&number_two);
	
	quotient = number_one / number_two; 
	product = number_one * number_two;
	sum = number_one + number_two;
	
	printf("\n The division is %2f\n",quotient);
	printf("\n The product is %2f\n",product);
	printf("\n The sum is %2f",sum);
	
	return 0;
	
}
