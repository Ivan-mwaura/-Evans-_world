#include<stdio.h>
#include<conio.h>
void main()
{
    int i,hottest,coolest;
    int temp[7],sum = 0;
    float avg_temp;

    for (i = 0; i < 7; i++)
    {
        printf("Enter the temperature for day : %d ->", i + 1);
        scanf("%d",&temp[i]);
        sum = sum + temp[i];
    }
    avg_temp = sum / 7.0;

    hottest = coolest = 0;

    for(i = 0; i < 7 ; i++)
    {
        if (temp[i] > 25)
        {
            hottest++;
        }
        else
            coolest++;
    }
     for (i = 0; i < 7; i++)
        printf("\nThe temperature for day : %d is %d\n",i + 1,temp[i]);
        printf("\nThe average temperature is: %f \n",avg_temp);

        printf("\nThe hottest days are : %d\n",hottest);
        printf("\nThe coolest days are : %d\n",coolest);


getch();
}
