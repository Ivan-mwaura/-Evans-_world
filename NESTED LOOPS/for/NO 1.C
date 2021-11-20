#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int i,j;

        for(int i = 0;i <= 5;i++)
          {
             if(i == 0)
                printf(" * ");
             else
                printf("\n%d",i);

                for(int j = 1;j <= 5;j++)
                    if(j*i == 0)
                     printf("%*");
                     else
                        if(j * i < 10)
                        printf("\t%d",i * j);
                        else
                        printf("\t%d",i * j);



          }
 getch();
}
