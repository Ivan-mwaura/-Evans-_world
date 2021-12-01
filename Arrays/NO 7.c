#include<stdio.h>
#include<conio.h>
void main()
{
    float test[5] = { 10.1,20.1,30.1,40.1,50.1},j[2];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%.2f",test[i]);
        printf("\t");
          j[i] = test[i] + 2.0;

    }
     printf("\n");
    for(i = 0; i <5; i++)
    {

      printf("%.2f\t",j[i]);

    }
getch();
}
