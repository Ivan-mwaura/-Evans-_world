#include<stdio.h>
int main()
{
    char k;

    printf("\nEnter a character->");
    k = getchar();

    if(k >= 'a' && k <= 'z')
    {
        printf("\n%c is in lowercase ",k);
    }
    else if(k >= 'A' && k <= 'Z')
    {
        printf("\n%c is in upper case",k);
    }
    else if((k >= '0') && (k <= '9'))
    {
        printf("\n%c is a digit",k);
    }
    printf("\n\n");

    return 0;

}
