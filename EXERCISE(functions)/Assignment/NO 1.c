#include<stdio.h>
#include<conio.h>
float circle_area(float radius),circle_circumference(float radius);
void main()
{
    float ar,rad,circ;

    printf("Enter the radius->");
    scanf("%f",&rad);

    ar = circle_area(rad);
    circ = circle_circumference(rad);

    printf("\nThe area is %f",ar);
    printf("\nThe circumference is %f",circ);

    getch();
}
float circle_area(float radius)
{
    float area;
    area  = 22.0/7 * radius * radius;
    return(area);
}
float circle_circumference(float radius)
{
    float circumference;
    circumference = 22.0/7 * radius * 2;
   return (circumference);
}
