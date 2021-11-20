#include <stdio.h>
#include <ctype.h>
int main()
{
    char str;

    printf("Enter a character ->");
     str=getchar();

    if(isalpha(str))
    printf("\nThe character is %c : letter",str);
    else if(isdigit(str))
    printf("\nThe character %c : a digit",str);
    else
    printf("\nThe character is %c : a special character",str);

    printf("\n\n");

  return 0;
}
