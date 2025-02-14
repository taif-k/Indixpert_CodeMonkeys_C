#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    while (i < 5, j < 10)
    {
        i++;
        j++;
    }
    printf("%d %d", i, j);

    return 0;
}

//In C, the comma operator checks both expressions, but the result of the last expression(j<10) determines the condition of the while loop.
// The while loop checks the result of j < 10, since that is the last expression and i and j are incremented on the basis of j<10.