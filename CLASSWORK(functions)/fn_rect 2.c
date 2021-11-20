#include<stdio.h>
float rect_per(float width, float length); //function prototype
void main( )
{
	float pr, wid, leng;

	printf("Enter the width and length of the rectangle: ");
	scanf("%f  %f",&wid,&leng);

	pr = rect_per(wid,leng); //function call (R.H.S)

	printf("\nThe area of the rectangle is %.2f\n\n",pr);
}
float rect_per(float width, float length) //function header/heading
{
	float perimeter;
	perimeter = 2 * (width + length);
	return (perimeter);
}
