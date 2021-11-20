#include<stdio.h>
#include<conio.h>
float grade(float average_mark);
void main()
{
    float avg,avg_mrk;

    printf("Enter the average_mark mark ->");
    scanf("%f",&avg);

    avg_mrk = grade(avg);

    getch();
}
float grade(float average_mark)
{

    if(average_mark >= 80 &&  average_mark <= 100)
    {
        printf("\nYou grade is : A ");
    }
    else if(average_mark >= 70 && average_mark < 80)
    {
        printf("\nYour grade is : B ");
    }
    else if (average_mark >= 60 && average_mark < 70 )
    {
        printf("\nYour grade is : C ");
    }
    else if (average_mark >= 50 && average_mark < 60)
    {
        printf("\nYour Grade is : D");
    }
    else
        printf("\nYour grade is : E ");

}
