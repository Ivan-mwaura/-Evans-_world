#include<stdio.h>
#include<conio.h>
struct vodka
{

    int choice,bottles;


};
int main()
{
 struct vodka    cust1;

     printf("/**Evans wine and spirits/**");
     printf("\nType               price/n");
     printf("\n1.Tusker             100\n");
     printf("\n2.pilsner            120\n");
     printf("\n3.smirnoff ice        140\n");
     printf("\n4.white cap          90\n");

     printf("Enter your choice -> ");
     scanf("%d",&cust1.choice);

     if(cust1.choice==1)
     {
         printf("\nHow many bottles of Tusker do you want -> \n");
         scanf("%d", &cust1.bottles);
         printf("The cost of %d bottles of Tusker is ksh. %d",cust1.bottles,cust1.bottles *100);
     }
     if(cust1.choice==2)
     {
        printf("\nHOw many bottles of pilsner do you want? ->\n ");
        scanf("%d", &cust1.bottles);
        printf("The cost of %d bottles of pilsner is ksh. %d",cust1.bottles,cust1.bottles*120);
     }
      if(cust1.choice==3)
     {
        printf("\nHow many bottles of smirnoff do you want -> \n");
        scanf("%d", &cust1.bottles);
        printf("\nThe cost of %d bottles of smirnoff is ksh.%d",cust1.bottles,cust1.bottles*140);
     }
      if(cust1.choice==4)
     {
        printf("\nHow many bottles of white cap do you want -> \n");
        scanf("%d", &cust1.bottles);
        printf("\nThe cost of %d bottles pf white cap is ksh.%d",cust1.bottles,cust1.bottles*190);
     }
     if(cust1.choice > 4)
     {
         printf("\nNot available.\n  ");
         main();
         printf("\nEnter a number between 1-4\n");
     }
     return 0;
}
