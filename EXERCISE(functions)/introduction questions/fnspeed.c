#include<stdio.h>
#include<conio.h>
float speed(float metres,float minutes);
int main()
{
    float m,min,sp;

    printf("\nEnter the distance in metres -> ");
    scanf("%f",&m);
    printf("\nEnter the time in minutes->");
    scanf("%f",&min);

    system("cls");

    sp = speed(m,min);

    printf("\nThe speed is %fkm/hr",sp);
    getch();
}
float speed(float metres,float minutes)
{
    float velocity;
    velocity = ((metres / 1000) / (minutes / 60));
    return(velocity);
}
