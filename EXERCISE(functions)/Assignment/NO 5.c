#include<stdio.h>
#include<conio.h>
float get_big(float integer1,float integer2,float integer3);
void main()
{
   float num1,num2,num3,bg;

   printf("\nEnter three floating_point_numbers->");
   scanf("%f %f %f",&num1, &num2,&num3);

   bg = get_big(num1,num2,num3);

   printf("\nThe Three numbers are is %.1f %.1f %.1f\n",num1,num2,num3);

   getch();
}
float get_big(float integer1,float integer2,float integer3)
{
    if(integer1 > integer2 && integer3)
    {
        printf("\nBiggest number is :%.1f",integer1);
    }
    else if(integer2 > integer1 && integer2)
    {
        printf("\nBiggest number is : %.1f",integer2);
    }
    else if(integer3 > integer2 && integer3)
    {
        printf("\nBiggest number is : %.1f",integer3);
    }


}
