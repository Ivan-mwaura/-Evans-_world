#include<stdio.h>
#include<conio.h>
struct conversion
{
    float measurements,kilometers;
};
int main()
{
    struct conversion  conv1;

    printf("Enter the measurements in meters->");
    scanf("%f",&conv1.measurements);

    conv1.kilometers = conv1.measurements * 1000;

    printf("\n%.0f km is %.1f M",conv1.measurements,conv1.kilometers);
}
