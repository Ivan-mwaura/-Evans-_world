#include <stdio.h>
 int main()
{
    float  cm,meter,km;
    //input the length in centimeters
    printf("Enter the length in centimeters : ");
    scanf("%f",&cm);
    meter = cm / 100;
    km = meter / 100;

    //print the output in meters
    printf("/n The length in meters is %2f",meter);
    printf("\n The length in kilometers is %2f",km);

    return 0;

}
