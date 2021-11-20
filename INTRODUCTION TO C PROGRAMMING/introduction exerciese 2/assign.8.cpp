#include <stdio.h>
 int main()
 {
     float weight,grams,kilograms,packages;
     //input the weight of the packages in grams
     printf("Enter the weight of packages -> ");
     scanf("%f",&grams);


     kilograms = grams / 1000;
     packages = kilograms * 10;


     //print the output in kilograms and packages
      printf("\n The weight in kilograms is %.2f",kilograms);
      printf("\n The packages are %f",packages);

      return 0;
 }
