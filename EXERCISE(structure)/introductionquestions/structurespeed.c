#include<stdio.h>
struct speed
{
    float meters,minutes,kilometers,hours,velocity;

};
int main()
{
    struct speed   speed1;

    printf("Enter the distance->");
    scanf("%f",&speed1.meters);
    printf("\nEnter the time->");
    scanf("%f",&speed1.minutes);

    speed1.kilometers = speed1.meters /1000;
    speed1.hours = speed1.minutes / 60;
    speed1.velocity = (speed1.kilometers * speed1.hours);

    printf("\nThe speed is %.3f km/hr",speed1.velocity);
}
