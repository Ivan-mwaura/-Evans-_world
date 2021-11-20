#include<stdio.h>
#include<ctype.h>
int main()
{
    char str;

    printf("Enter a character ->");
    str = getchar();
    if(isupper(str))
    printf("\nThe character is %c : upper case",str);
    else if(islower(str))
    printf("\nThe character is %c : lower case",str);
    else
    printf("\nThe character is not a letter");

    return 0;
}
