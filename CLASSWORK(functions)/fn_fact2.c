#include<stdio.h>
#include<conio.h>
float fact (int h);
void main( )
{
	int a,b,c;
	printf("\nEnter the first number: ");
	scanf ("%d", &a);
	printf("\nEnter the second number: ");
	scanf("%d", &b);
	printf ("\nEnter the third number: ");
	scanf("%d",&c);
	printf("\nThe factorial of %d is %.0f", a, fact(a));
	printf("\nThe factorial of %d is %.0f", b, fact(b));
	printf("\nThe factorial of %d is %.0f\n\n", c, fact(c));
}
int fact(int h)
{
	int i;
	float g =1;
	for (i = 1; i <= h; i++)
		g = g * i;
	return(g);
}
