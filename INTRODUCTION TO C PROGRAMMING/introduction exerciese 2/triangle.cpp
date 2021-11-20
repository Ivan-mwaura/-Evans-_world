#include <stdio.h>
#include <string.h>
int main()
{
    float base,height,hypotenuse,area,perimeter;

    printf("Enter the base -> ");
    scanf("%f",&base);
    printf("Enter the height -> ");
    scanf("%f",&height);
    printf("Enter the hypotenuse -> ");
    scanf("%f",&hypotenuse);

    area = (base*height)/2;
    perimeter = base+height+hypotenuse;

    printf("The area is %f\n",area);
    printf("the perimeter is %f\n",perimeter);

    return 0;

}
