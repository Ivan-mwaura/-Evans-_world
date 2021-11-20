#include <stdio.h>
 int main()
 {
     float  degree_celcius, degree_fahrenheit;
     //input the temperature in  celcius
     printf("Enter the temperature in degree_celcius -> ");
     scanf("%f",&degree_celcius);

     //convert degree_celcius to degree_fahrenheit
    degree_fahrenheit = ((degree_celcius *9/5)+ 32);

     printf("/n The temperature in degree_fahrenheit is %2f\n",degree_fahrenheit);

     return 0;
 }
