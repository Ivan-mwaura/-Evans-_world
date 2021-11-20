#include<stdio.h>
float triangle_area(float base,float height); //function prototype//
void main()
{
    float ar,ba,he;

    printf("\nEnter the base and height.");
    scanf("%f %f",&ba ,&he);

    ar = triangle_area(ba,he);//function call//

    printf("\nThe area is %f",ar);
}
float triangle_area(float base,float height)//function heading//
{
    float area;
    area = 1.0/2* base * height;
    return(area);
}
