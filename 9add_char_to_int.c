#include <stdio.h>

int main()
{
    double age = 2.232;
    char ch = 'A';

    int result = (int)ch + age;
    double result_asdoubel = ch + age;

    printf("The result is equal to %d \n", result);
    printf("The result as double is equal to %lf", result_asdoubel);

    return 0;
}
