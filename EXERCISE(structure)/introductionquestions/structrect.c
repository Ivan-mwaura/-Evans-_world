#include<stdio.h>
#include<conio.h>
struct Rectangle
{
    int length,width;
    float area,perimeter;
};
void main()
{
    struct Rectangle  rect1;

    printf("Enter the length and width");
    scanf("%d %d",&rect1.length,&rect1.width);


    rect1.perimeter = 2*( rect1.length + rect1.width);
    rect1.area = rect1.length * rect1.width;

    printf("\nThe perimeter is %f",rect1.perimeter);
    printf("\nThe area is %f",rect1.area);
}
