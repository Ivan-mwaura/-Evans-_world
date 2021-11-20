#include <stdio.h>
#include <math.h>

int main()
{
    int num,even,odd;

    printf("Enter an integer -> ");
    scanf("%d" ,&num);
    if(num % 2 ==0)
    {
        printf("\nThe number is even.");
    }
    else
    {
        printf("\nThe number is odd.");
    }
    printf("\n\n");

    return 0;

}
