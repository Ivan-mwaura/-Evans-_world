#include <stdio.h>
#include <stdlib.h>
struct vodka
{

};
 int main()
 {
     int choice,bottles;

     printf("/**Evans wine and spirits/**");
     printf("\nType               price/n");
     printf("\n1.Tusker             100\n");
     printf("\n2.pilsner            120\n");
     printf("\n3.smirnoff ice        140\n");
     printf("\n4.white cap          90\n");

     printf("Enter your choice -> ");
     scanf("%d", &choice);

     if(choice==1)
     {
         printf("\nHow many bottles of Tusker do you want -> \n");
         scanf("%d", &bottles);
         printf("The cost of %d bottles of Tusker is ksh. %d",bottles,bottles *100);
     }
     if(choice==2)
     {
        printf("\nHOw many bottles of pilsner do you want? ->\n ");
        scanf("%d", &bottles);
        printf("The cost of %d bottles of pilsner is ksh. %d",bottles,bottles*120);
     }
      if(choice==3)
     {
        printf("\nHow many bottles of smirnoff do you want -> \n");
        scanf("%d", &bottles);
        printf("\nThe cost of %d bottles of smirnoff is ksh.%d",bottles,bottles*140);
     }
      if(choice==4)
     {
        printf("\nHow many bottles of white cap do you want -> \n");
        scanf("%d", &bottles);
        printf("\nThe cost of %d bottles pf white cap is ksh.%d",bottles,bottles*190);
     }
     if(choice>4)
     {
         printf("\nNot available.\n  ");
         main();
         printf("\nEnter a number between 1-4\n");
     }
     printf("\n\n");

     return 0;


 }
