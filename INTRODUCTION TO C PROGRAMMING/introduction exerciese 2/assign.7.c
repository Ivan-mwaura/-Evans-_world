#include <stdio.h>
#include <math.h>
int main()
{
    float km,meters,minutes,hour,speed,velocity;
    //input the distance in meters
    printf("Enter the distance ->  ");
    scanf("%f",&meters);
    printf("Enter the time -> ");
    scanf("%f",&minutes);

    speed = (meters/minutes)/(1000/60);


    //print the output of speed in km/hour
    printf("The velocity in km/hour is %f\n\n",speed);

    return 0;

}
