#include <stdio.h>
int main()
{
    int t;
    system("color a");
    t = 1;
    printf("\nNumbers");
    do
    {
        if(t % 8 == 0)
        printf("\n%d",t);
        t++;

    }while(t <= 200);
    return 0;
}
