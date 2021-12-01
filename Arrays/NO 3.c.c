#include<stdio.h>
#include<conio.h>
void main()
{
    int subj[5],i,sum = 0;
    float avg;

    for(i = 0; i < 5; i++)
    {
        printf("Enter mark for subject : %d ->",i + 1);
        scanf("%d",&subj[i]);

        sum = sum + subj[i];
    }

    avg = (sum / 5.0);

    for(i = 0; i < 5; i++)
    printf("\nThe marks  for subject %d is : %d ",i + 1,subj[i]);
    printf("\n\nThe sum of marks is : %d\n",sum );
    printf("\nThe average for the five subjects is : %f",avg);

 getch();

}
