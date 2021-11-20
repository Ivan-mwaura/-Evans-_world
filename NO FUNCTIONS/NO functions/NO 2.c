#include <stdio.h>
int main()
{
    int num,i;
    printf("\nEnter a number ->");
    scanf("%d",&num);
    for(i = 1; i <= num / 2; i++)

    if(num == i * i)
    {
    printf("\nThe square_root %d is %d",num,i);
    goto ending;
    }
    printf("\nsquare root of %d is not a whole number",num);

  ending:


    printf("\n\n");

    return 0;

}

