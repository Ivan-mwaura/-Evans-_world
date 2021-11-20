#include<stdio.h>
#include<conio.h>
struct conversion
{
    float measurements,meters;
};
int main()
{
    struct conversion  conv1;

    printf("Enter the measurements->");
    scanf("%f",&conv1.measurements);

    conv1.meters = conv1.measurements / 1000;

    printf("\n%.0f cm is %.2f M",conv1.measurements,conv1.meters);
}
