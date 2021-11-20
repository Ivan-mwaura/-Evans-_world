#include<Stdio.h>
#include<ctype.h>
int main()
{
    char string;

    printf("\nEnter a character ->");
    string=getchar();

    if(islower(string))
      {
        printf("\n%c in uppercase is %c: ",string,toupper(string));
      }
    else if(isupper(string))
    {
       printf("\n%c in lowercase is %c",string,tolower(string));
    }
    else
        printf("\n%c is not a letter.",string);

    printf("\n\n");

    return 0;

}
