#include<stdio.h>
#include<conio.h>
void main()
{
    int item_code[1000],price[1000],quantity[1000];
    float Total_cost[1000];
    int i,num;

    printf("Enter the maximum NO of items ->");
    scanf("%d",&num);

    system("cls");

    for(i = 0; i < num;i++)
    {
        printf("\nEnter the code of item : %d ->",i + 1);
        scanf("%d",&item_code[i]);
        printf("\nEnter the price of item : %d ->",i + 1);
        scanf("%d", &price[i]);
        printf("\nEnter the quantity->");
        scanf("%d", &quantity[i]);

        Total_cost[i] = price[i] * quantity[i];

        system("cls");
    }
    printf("Item code      price     quantity         Total cost");

    for(i = 0; i < num; i++)
    {
        printf("\n%d",item_code[i]);
        printf("\t\t%d",price[i]);
        printf("\t%d",quantity[i]);
        printf("\t\t%.2f",Total_cost[i]);
    }
        getch();
}
