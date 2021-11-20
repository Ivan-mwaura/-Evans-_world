
#include<stdio.h>
#include<conio.h>
int even(int number );//function prototype//
void main()
{
    int num,cal;

    printf("Enter a number->");
    scanf("%d",&num);

    cal = even(num);//function call//

    getch();
}
int even(int number)
{
    if(number %2 == 0)
    {
        printf("\n 1");
    }
    else if (number %2 != 0)
    {
       printf("\n 0 ");
    }

}

