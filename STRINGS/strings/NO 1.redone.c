#include <stdio.h>
int main()
{
    char k;

    printf("Enter a character ->");
    k = getchar();

    if(( k > 'a'&& k <= 'z')||(k > 'A' && k <= 'Z'))
           printf("\n%c is in letter",k);

    else if((k > '0' && k <= '9'))
           printf("\n%c is a digit",k);
    else
           printf("\n%c : a special character",k);

    printf("\n\n");

  return 0;
}
