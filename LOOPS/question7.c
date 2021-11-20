#include <stdio.h>
#include <conio.h>

int main()
{
	for (int i = 0; i <= 5; i++)
	{
		if (i == 0)
			printf("*  ");
		else
			printf("%d  ", i);

		for(int j = 1; j <= 6; j++)
		{
			if ( j * i == 0)
				printf("%d  ", j);
			else
				if (j * i < 10)
					printf("%d  ", (j*i));
				else
					printf("%d ", (j*i));
		}
		printf("\n");
	}



	printf("\n\n");
	return 0;
	getch();
}
