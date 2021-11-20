#include<stdio.h>
#include<conio.h>
int smallest(int integer1,int integer2,int integer3);
void main()
{
   int num1,num2,num3,sm;

   printf("\nEnter three integers->");
   scanf("%d %d %d",&num1, &num2,&num3);

   sm = small(num1,num2,num3);

   printf("\nThe Three numbers are is %d %d %d\n",num1,num2,num3);

   getch();
}
int smallest(int integer1,int integer2,int integer3)
{
    if(integer1 < integer2 && integer3)
    {
        printf("\nSmallest number is :%d",integer1);
    }
    else if(integer2 < integer1 && integer2)
    {
        printf("\nSmallest number is : %d",integer2);
    }
    else
    {
        printf("\nSmallest number is : %d",integer3);


}
