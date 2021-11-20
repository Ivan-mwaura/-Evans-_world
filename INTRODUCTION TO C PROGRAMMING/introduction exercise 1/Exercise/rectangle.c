#include<stdio.h>
#include<string.h>
int main( )
{
    float length,width,perimeter,area;

    printf("Enter the length -> ");
    scanf("%f",&length);
    printf("Enter the width -> ");
    scanf("%f",&width);


    area = length*width;
    perimeter = (2*(length + width));
//print the output of area and perimeter

    printf("\n The product is %f\n\n",area);
    printf("\n The sum is %f\n\n",perimeter);
 return 0;
}
