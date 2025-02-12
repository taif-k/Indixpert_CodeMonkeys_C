#include <stdio.h>

int sum(int a, int b);
int main()
{
    int num1=2;
    int num2=4;
    printf("Sum is: %d", sum(num1, num2));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}