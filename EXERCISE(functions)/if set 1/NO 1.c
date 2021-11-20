#include<stdio.h>
#include<conio.h>
int payment(int bottle,int prices);//function prototype//
int main()
{
    int cash,price;
    int choice,bottles;

     printf("/**Evans wine and spirits/**");
     printf("\nType               price/n");
     printf("\n1.Tusker             100\n");
     printf("\n2.pilsner            120\n");
     printf("\n3.smirnoff ice        140\n");
     printf("\n4.white cap          90\n");

     printf("\nEnter your choice->");
     scanf("%d",&choice);

     cash = payment(bottles);//function call//

      if(choice==1)
     {
         printf("\nHow many bottles of Tusker do you want -> \n");
         scanf("%d", &bottles);
         price = 100;
     }
     if(choice==2)
     {
        printf("\nHOw many bottles of pilsner do you want? ->\n ");
        scanf("%d", &bottles);
        price = 120;

     }
      if(choice==3)
     {
        printf("\nHow many bottles of smirnoff do you want -> \n");
        scanf("%d", &bottles);
       price = 140;
     }
      if(choice==4)
     {
        printf("\nHow many bottles of white cap do you want -> \n");
        scanf("%d", &bottles);
        price = 90;

     }
     if(choice>4)
     {
         printf("\nNot available.\n  ");
         main();
         printf("\nEnter a number between 1-4\n");
     }

     printf("%d bottles will cost you %d" ,bottles,cash);
}
int payment(int bottle,int prices )
{
    int total;
    total = bottle * price;

    return (total);
}
