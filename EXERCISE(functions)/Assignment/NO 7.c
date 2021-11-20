#include<stdio.h>
#include<conio.h>
#define pi 3.142
float triangle_area(float base,float height);
float  rectangle_area(float length,float width);
float circle_area(float radius);

void main()
{
    float ar,ba,he,leng,wid,rad;
    int choice;

    printf("choice      Figure");
    printf("\n1.        Triangle");
    printf("\n2.        rectangle");
    printf("\n3.        circle\n");

    printf("\nSelect a figure ->");
    scanf("%d",&choice);

    if (choice == 1)
     {
       printf("\nEnter the base and height ->");
       scanf("%f %f",&ba,&he);
     }
     else if(choice == 2)
     {
            printf("\nEnter the length and width");
            scanf("%f %f",&leng,&wid);
     }
     else if(choice  == 3)
     {
         printf("\nEnter the radius ->");
         scanf("%f",&rad);
     }

     ar = triangle_area(ba,he);
     ar = rectangle_area(leng,wid);
     ar = circle_area(rad);

     printf("\nThe area is %.2f",ar);
     getch();
}
float triangle_area(float base,float height)
{
    float area;
    area = 0.5 * base * height;
    return(area);
}
float  rectangle_area(float length,float width)
{
    float area;
    area= length * width;
    return (area);
}
float circle_area(float radius)
{
    float area;
    area = 22.0 / 7 * radius * radius;
    return(area);
}




