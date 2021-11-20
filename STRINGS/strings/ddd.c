#include<stdio.h>
#include<conio.h>
float kilograms(float grams)//function prototype//
int main;
{
    int grm,weight;

    printf("\nEnter the weight in grams->");
    scanf("%f",&grm);

     weight = kilograms(grm);//function call//

     printf("\nThe weight is %f",weight);
}
float kilograms(float grams)//function heading//
{
    float converted_weight,packages,no_of_packages;
    converted_weight = (grams / 1000);
    no_of_packages = converted_weight * 100;
    printf("it takes %.0 packets to form %.2f kgs.");
    return (converted_weight);
}

