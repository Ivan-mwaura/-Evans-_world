#include<stdio.h>
#include<conio.h>
void main()
{
    int i,avg_mrk,passes,fails,highest,lowest;
    int mark[10],sum = 0,num;

    printf("\nEnter the number of students you want to work with ->");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
      printf("\nEnter mark : %d -> ",i + 1);
      scanf("%d",&mark[i]);
      sum = sum + mark[i];
    }
    avg_mrk = sum / num;

    highest = lowest = 0;

    for(i = 0; i < num; i++)
    {
        if(mark[i] > highest)
        {
            highest = mark[i];
        }
        else
        {
            lowest = mark[i];
        }

    }
    passes = fails = 0;

    for(i = 0; i < num; i++)
    {
        if(mark[i] >= 60 )
        {
            passes++;
        }
        else
        {
            fails++;
        }
    }
    for (i = 0; i < num; i++)
    printf("\nThe marks are : %d \n",mark[i]);

    printf("\nThe average mark is %d",avg_mrk);
    printf("\nThe largest mark is : %d",highest);
    printf("\nThe lowest mark is : %d",lowest);
    printf("\nThe number of passes are : %d",passes);
    printf("\nThe number of fails are : %d",fails);
}
