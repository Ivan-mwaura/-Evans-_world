#include<stdio.h>
struct quantity
{
    float grams,weight,packages;
};
void main()
{
    struct quantity  w1;

    printf("Enter the weight in of the packages in grams->");
    scanf("%f",&w1.grams);

    w1.weight  = w1.grams / 1000;
    w1.packages = w1.weight * 10;

    printf("\nThe weight of the packages is %.2fkgs",w1.weight);
    printf("\nIt takes %.0f packages to form %.2fkgs",w1.packages,w1.weight);

}
