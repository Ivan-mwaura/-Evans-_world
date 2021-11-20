#include<stdio.h>
#include<conio.h>
float get_grade(float score1,float score2,float score3);
void main()
{
    float mrk1,mrk2,mrk3,avg_mrk;

    printf("Enter marks for the three subjects->");
    scanf("%f %f %f",&mrk1,&mrk2,&mrk3);

    avg_mrk = get_grade(mrk1,mrk2,mrk3);

    getch();
}
float get_grade(float score1,float score2,float score3)
{
    float average;
    average  = (score1 + score2 + score3) / 3;

    if(average >= 80 &&  average <= 100)
    {
        printf("\nYou grade is : A ");
    }
    else if(average >= 70 && average < 80)
    {
        printf("\nYour grade is : B ");
    }
    else if (average >= 60 && average < 70 )
    {
        printf("\nYour grade is : C ");
    }
    else if (average >= 50 && average < 60)
    {
        printf("\nYour Grade is : D");
    }
    printf("\nYour average mark is %f",average);

}
