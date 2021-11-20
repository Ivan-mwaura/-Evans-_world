#include <stdio.h>
#include <stdlib.h>
#define pi 3.142
int main()
{
    int length,width,base,height,radius,hypotenuse,rectangle,circle,triangle,area,perimeter,choice;

    printf("\n**Figure**\n\n");
    printf("1.rectangle\n");
    printf("2.circle\n");
    printf("3.triangle\n");

    printf("\nselect a figure -> ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: printf("\nEnter the length and width -> ");
                scanf("%d %d",&length,&width);
                printf("\nThe area is %d",area=(length*width),area);
                printf("\nThe perimeter is %d",perimeter=2*(length+width), perimeter);
                break;
       case 2: printf("\nEnter the radius  -> ");
               scanf("%d",&radius);
               printf("\nThe area is %d",area=(pi*radius*radius), area);
               printf("\nThe perimeter is %d",perimeter=2*(pi*radius), perimeter);
               break;
       case 3: printf("\nEnter the base height and hypotenuse -> ");
               scanf("%d %d %d",&base,&height,&hypotenuse);
               area = 1/2*base*height;
               perimeter = base+height+hypotenuse;
               printf("\nThe area is %d",area);
               printf("\nThe perimeter is %d",perimeter);
               break;



               printf("\n\n");
    }

    return 0;
}






