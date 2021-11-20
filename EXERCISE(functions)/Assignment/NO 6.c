#include<stdio.h>
#include<conio.h>
float calc_vol(float height,float length,float breadth);
void main()
{
    float hei,leng,breat,vol;

    printf("Enter the height length and breadth->");
    scanf("%f %f %f",&hei, &breat,&leng);

    vol = calc_vol(hei,breat,leng);

     printf("\nThe three measurements are height = %.1f breadth %.1f length = %.1f",hei,breat,leng);
     getch();
}
float calc_vol(float height,float length,float breadth)
{

    float volume;
    volume = height * breadth * length;

    printf("\nThe volume is %.2f",volume);

    return(volume);
}
