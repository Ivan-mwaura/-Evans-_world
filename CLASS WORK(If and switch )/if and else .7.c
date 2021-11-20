#include <stdio.h>
#include <math.h>

int main()
{
    int num1,num2,choice,answer;

    printf("\n operators\n");
    printf("\n1. + ");
    printf("\n2. - ");
    printf("\n3. * ");
    printf("\n4. / ");
    printf("\n5. % ");

    printf("\nEnter two numbers -> ");
    scanf("%f %f", &num1, &num2);

    switch(choice)
    {
        case 1: printf("\nEnter the choice which you want -> ");
                scanf("%f",&choice);
                printf("\nThe answer is %f",answer,answer = num1 + num2);
                break;
    }


}
