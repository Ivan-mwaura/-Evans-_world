#include<stdio.h>
int main()
{
    char k[50];
    int letter,digit,space,spchar,i = 1;

    printf("\nEnter a string ->");
    gets(k);
    while(k[i] != '0')
    {
        if(( k[i] >= 'a' && k[i] <= 'z') || (k[i] >= 'A' && k[i] <= 'Z'))
        letter++;

        else if((k[i] != '0' && k[i] <= '9'))
        digit++;

        else if(k[i] == ' ')
        space++;

        else
        spchar++;
        i++;
    }

        printf("\%s has:n%d letters, %d digits ,%d spaces, %d special_characters",k,letter,digit,space,spchar);

        printf("\n\n");

        return 0;
}
