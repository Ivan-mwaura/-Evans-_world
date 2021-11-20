#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float num1,num2,result;

    printf("\nEnter two number->");
    scanf("%f %f",&num1, &num2);

    if(num1>num2)
    {
        result = (num1 / num2);

        printf("\n%f",result);
    }
    else if(num2 > num1)
    {
        result  = (num2 / num1);

        printf("\n%f",result);
    }
    else if((num1 == 0 || num2 == 0))
    {
        printf("\nError");
    }
    return 0;
    getch();
}
