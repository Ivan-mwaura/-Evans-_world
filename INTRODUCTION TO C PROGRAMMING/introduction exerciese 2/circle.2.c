#include <stdio.h>
int main()
{
    float radius,area,circumference;
    const  char PI = 22.0/7;

    printf("Enter the radius -> ");
    scanf("%f",&radius);

    area = PI * radius * radius;
    circumference= 2 * PI * radius;
    //print the output of area and circumference

    printf("The area is %f\n",area);
    printf("The circumference is %f\n",circumference);

    return 0;
}
