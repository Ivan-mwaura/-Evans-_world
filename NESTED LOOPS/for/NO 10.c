#include<stdio.h>56
int main()
{
    int i,j;

    for(i = 0;i <= 50;i = i + 10)
    {
        if(i == 0)
        {
            printf(" * ");
        }
        else
            printf("%d", i);
        for(j = 1; j <= 7; j++)
        {
            if(i * j == 0 )
            {
                printf("\t%d", j);
            }
            else if (i * j <= 350)
            {
                printf("\t%d", (i * j));
            }

        }
       printf("\n");
    }
    printf("\n\n");

return 0;

}

