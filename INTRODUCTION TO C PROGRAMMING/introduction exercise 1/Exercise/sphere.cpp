#include <stdio.h>
#include <math.h>
# define PI 3.142
int main()
{     
     float radius,surfacearea,volume;
     
     printf("Enter the radius -> ");
    scanf("%f",&radius);
     
     printf("line");
    surfacearea = PI*radius*radius*4;
    volume = PI*radius*radius*radius*4/3; 

    printf("\n The surfacearea is %2f\a",surfacearea);
    printf("\n The volume is %2f\a",volume);
    
    return 0;

}
