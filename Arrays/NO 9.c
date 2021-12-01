#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[2][3] = {{10,20,30},{50,60,70}};
    int i , j,sum = 0;
    float mean;
    printf("The array elements are : \n");
    {
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 3; j++)
            {
                printf("%4d",arr[i][j]);
                sum = sum + arr[i][j];
            }
            printf("\n");
        }
    }
    mean = sum /(i+j);

    printf("\nThe sum of the arrays is %d",sum);
    printf("\nThe mean of the matrix is %.1f",mean);

    getch();
}
