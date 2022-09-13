#include <stdio.h>

int main()
{
    double age;
    char character;

    printf("Enter the values: ");
    scanf("%lf %c", &age, &character);

    printf("The age is %lf",age);
    printf("The character is %c",character);

    return 0;
}
