#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("Enter a string ->");
    gets(str);

    printf("\nThe proper ways to write string is %s" ,strlwr(str),str);

    printf("\n\n");
    return 0;
}
