#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,j,ans = 1;
    printf("\nEnter a number  ->");
    scanf("%d", &x);
    printf("\nEnter a power ->");
    scanf("%d", &y);

    for(j = 1; j <= y;j++)
        ans  = x * ans;
    printf("\nThe ans is %d",ans);
    printf("\n\n");

    getch();
    return 0;
}
