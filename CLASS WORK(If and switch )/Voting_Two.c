#include<stdio.h>
void main( )
{
	int age;

	printf ("Enter your age: ");
	scanf("%d",&age);

	if (age >= 18)
    {

		printf("\nYou can vote");
		printf("\nYou are eligible");
    }
	else
		printf("\nYou are too young to vote.");
		printf("\n ACHA HARAKA KIJANA.");


}
