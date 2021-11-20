#include<stdio.h>
#include<conio.h>
struct students
{
  char name[10],grade[1];
  float avg_mrk;
};
void main()
{
    struct students stud[3];
    int num, i;

    printf("\nHow many students do you want to use ->");
    scanf("%d",&num);

    system("CLS");

    for(i = 1 ;i <= num; i++)
    {
        printf("\n***students details******\n");
        printf("\nEnter the name of the students ->");
        scanf("%s",stud[i].name);
        printf("\nEnter the students average mark ->");
        scanf("%f",&stud[i].avg_mrk);

       system("CLS");
    }
    for(i = 1; i <= num; i++)
    {
        printf("\n*****students report******\n", i + 1);
        printf("\nThe students name is %s",stud[i].name);
    {

        if(stud[i].avg_mrk >= 80 && stud[i].avg_mrk <= 100)
        {
            printf("\nThe student has an : A");
        }
        else if(stud[i].avg_mrk >= 70 && stud[i].avg_mrk < 80)
        {
            printf("\nThe student has a : B");
        }
        else if(stud[i].avg_mrk >= 60 && stud[i].avg_mrk < 70)
        {
            printf("\nThe students has a : C");
        }
        else if(stud[i].avg_mrk >= 50 && stud[i].avg_mrk < 60)
        {
            printf("\nThe students has a : D");
        }
        else if(stud[i].avg_mrk >= 0 && stud[i].avg_mrk < 50)
        {
           printf("\nThe students has an : E");
        }
    }

 }
  getch();
}
