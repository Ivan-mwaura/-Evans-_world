#include<stdio.h>
void main()
{
	char h[100];
	int i;
	
	printf("\nEnter the string: ");
	gets(h);
	
	for(i = 0; h[i] != 0; i++)
	{
		if(h[i] >= 65 && h[i] <= 90)
			h[i] = h[i] + 32;
		else if(h[i] >= 97 && h[i] <= 122)
			h[i] = h[i] - 32;
	}
	printf("\nThe converted string is %s",h);
	
	getch();
}
