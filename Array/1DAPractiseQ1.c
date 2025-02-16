#include <stdio.h>

int main()
{
    int score[5];
    int Newscore[5];
    int arr1[3];
    int arr2[3];
    int arr3[3];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);
    }

    printf("\nNew score Marks ");
    for (int i = 0; i < 5; i++)
    {
        Newscore[i] = score[i];
        printf(" Index:%d %d ", i,Newscore[i]);
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("Enter values for array ");
    //     scanf("%d", &arr1[i]);
    //     scanf("%d", &arr2[i]);
    //     scanf("%d", &arr3[i]);
    // }
    // printf("%d", arr1[1] + arr2[1] + arr1[1]);

    return 0;
}