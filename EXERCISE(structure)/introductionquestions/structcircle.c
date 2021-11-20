#include<stdio.h>
#include<stdio.h>
struct Circle
{
    int radius;
    float area,perimeter;
};
void main()
{
    struct Circle circ1;
    printf("Enter the radius->");
    scanf("%d",&circ1.radius);

    system("cls");

    circ1.area = 22.0/7 * (circ1.radius * circ1.radius);
    circ1.perimeter = 2 * (22.0/7 * circ1.radius);

    printf("\nThe area is %.1f",circ1.area);
    printf("\nThe perimeter is %.1f",circ1.perimeter);

    getch();
}

