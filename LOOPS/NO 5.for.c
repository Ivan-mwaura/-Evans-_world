#include <stdio.h>
int main()
{
    int x;
    printf("\nNumbers.");
    for (x = 1; x <= 200;x++)
    {
        if (x % 8 == 0)
        printf("\n%d",x);
    }
    return 0;
}
