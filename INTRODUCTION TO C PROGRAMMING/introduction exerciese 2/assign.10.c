 #include <stdio.h>
int main()
{
    int age;
    printf("Enter the age -> ");
    scanf("%f",&age);
    if(age >=18)
    {
        printf("\n you are eligible for voting :\n");
    }
    else
    {
        printf("\n you are not eligible for voting :\n");

        printf("\n\n");

    }

    return 0;
}
