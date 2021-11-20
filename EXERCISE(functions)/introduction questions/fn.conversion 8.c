#include<stdio.h>
float conversion_metres(float kilometres);
void main()
{
    float measur,calc;

    printf("\nEnter the measurement in km->");
    scanf("%f",&measur);

    calc = conversion_metres(measur);

    printf("\n%.0f km  = %.2f M",measur,calc);
}
float conversion_metres(float kilometres)
{
    float metres;
    metres = (kilometres * 1000);
    return(metres);

}
