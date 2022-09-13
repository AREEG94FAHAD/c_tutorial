#include <stdio.h>

int main()
{
    double age;
    char character;

    printf("Enter the double input: ");
    scanf("%lf", &age);

    printf("Enter the character input: ");
    scanf("\n%c", &character);

    printf("The age is %d",age);
    printf("The character is %c",character);

    return 0;
}
