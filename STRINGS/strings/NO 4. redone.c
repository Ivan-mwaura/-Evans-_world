#include<stdio.h>
#include<ctype.h>
int main()
{
    char f[100];
    int k;

    printf("Enter a character ->");
    scanf("%s",f);


    for(k = 0;f[k] != 0;k++)
      if( f[k]>= 65 && f[k] <=90)
      {
         f[k]= f[k] + 32;
         printf("\nThe character  in  lower case is %s",f);
      }
      else if((f[k]>=97 && f[k] <= 122))
      {
          f[k]= f[k] - 32;
          printf("\nThe character  in upper case  is %s",f);
      }
       else
           printf("\nThe character is not a letter",f);


    return 0;
}
