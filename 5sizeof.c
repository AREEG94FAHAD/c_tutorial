#include <stdio.h>

int main()
{
    int age;
    double number;
    char character;
    float fnumber;

    printf("size of int = %zu \n", sizeof(age));
    printf("size of double is %zu \n", sizeof(number));
    printf("size of char is %zu \n", sizeof(character));
    printf("size of float is %zu \n", sizeof(fnumber));

    return 0;
}
