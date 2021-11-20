#include <stdio.h>
int main()
#define PI 3.142
{
    float radius,area,circumference;

    printf("Enter the radius -> ");
    scanf("%f",&radius);

    area = PI*radius*radius;
    circumference= 2*PI*radius;
    //print the output of area and circumference

    printf("The area is %f\n",area);
    printf("The circumference is %f\n",circumference);

    system("PAUSE");
}
