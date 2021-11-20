#include<stdio.h>
float conversion_metres(float centimetres);
void main()
{
    float measur,calc;

    printf("\nEnter the measurement in cm->");
    scanf("%f",&measur);

    calc = conversion_metres(measur);

    printf("\n%.0f cm  = %f M",measur,calc);
}
float conversion_metres(float centimetres)
{
    float metres;
    metres = centimetres * 1.0/100;
    return(metres);

}
