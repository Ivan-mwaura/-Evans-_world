#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,num3,num4,num5,num6,k,sum = 0;

    printf("\nEnter a list of numbers ->");
    scanf("%d %d %d %d %d %d",&num1, &num2,num3,&num4, &num5, &num6);

    for(k <= num1;k <= num6;k++)
    {
        sum = sum + k;
        printf("\nThe sum = %d",sum);
        k++;
    }


    printf("\n\n");
    return 0;
}

