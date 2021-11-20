#include<stdio.h>
#include<conio.h>
struct Triangle
{
    int base,height,total;
};
int main()
{
    struct Triangle tr1;

    printf("Enter the base and height >");
    scanf("%d %d",&tr1.base,&tr1.height);
    tr1.total = 0.5 * tr1.base * tr1.height;
    printf("\nThe area is %d",tr1.total);

    return 0;
}
