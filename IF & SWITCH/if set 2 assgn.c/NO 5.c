#include <stdio.h>
struct Grades
{
    float average, p,q,r,s,t;
};
int main()
{
   struct Grades  stud1;

    printf("\nEnters the mark for  5 units -> ");
    scanf("%f %f %f %f %f", &stud1.p, &stud1.q, &stud1.r, &stud1.s, &stud1.t);

    stud1.average = (stud1.p + stud1.q + stud1.r + stud1.s + stud1.t) /5;

    printf("\nThe average mark is %.2lf",stud1.average);

    if ((stud1.average>=75) && (stud1.average <100))
    {
       printf("\ncongratulation,got a DINSTINCTION.");
    }
    else if((stud1.average>=65) &&  (stud1.average < 75))
    {
        printf("\ncongratulations you got a CREDIT.");
    }
    else if ((stud1.average >=50) &&  (stud1.average <65 ))
    {
        printf("\nYou have a PASS.");
    }
    else
    {
        printf("\nYou have a FAIL.");
    }
    printf("\n\n");

    return 0;
}
