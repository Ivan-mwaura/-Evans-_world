#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    printf("\nEnter the sentence ->");
    gets(str);

    printf("\nThe length of %s is  %d",str,strlen(str));

    return 0;
}
