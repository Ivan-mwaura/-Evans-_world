#include<stdio.h>
#include<conio.h>
float kilograms(float grams);//function prototype//
int main()
{
    float grm,weight;

    printf("\nEnter the weight in grams->");
    scanf("%f",&grm);

     weight = kilograms(grm);//function call//

     printf("\nThe weight is %f",weight);
     getch();
}
float kilograms(float grams)//function heading//
{
    float converted_weight,packages,no_of_packages;
    converted_weight = (grams / 1000);
    no_of_packages = (converted_weight * 10);
    printf("\nIt takes %.0f packets to form %.2f kilograms.\n",no_of_packages,converted_weight);
    return (converted_weight);
}

