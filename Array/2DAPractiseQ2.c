
//                                                 store array only stores the value according to if condition

#include <stdio.h>

int main()
{

    int storage[5];
    int storageCheck[5];
    int counter = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &storageCheck[i]);
        if (storageCheck[i] >= 10 && storageCheck[i] <= 100)
        {
            storage[counter] = storageCheck[i]; // We are using counter, to start the index of storage from zero
            counter++;                          //  otherwise if value is not according to condition it will jump from the current index to the next one
        }
    }

    for (int i = 0; i < counter; i++)
    {
        printf(" %d ", storage[i]);
    }

    return 0;
}

//                                                                 Display only Duplicate number
 
// #include <stdio.h>

// int main()
// {
//     int num[5] = {1, -1, -1, 1, 0};
//     int dup[5] = {0};

//     int count = 0;
//     int match = 0;
//     int counter = 0;

//     for (int i = 0; i < 5; i++)       //  0  1  1  2   4
//     {
//         for (int j = i + 1; j < 5; j++)  //  1  1  2  4
//         {
//             if (num[i] == num[j])
//             {
//                 count = 1;
//                 for (int k = 0; k < 5; k++)
//                 {
//                     if (num[i] == dup[k])
//                     {
//                         match = 1;
//                     }
//                 }
//             }
//         }

//         if (count == 1 && match == 0)
//         {
//             dup[counter] = num[i];
//             counter++;
//         }
//         match = 0;
//         count = 0;
//     }

//     for (int i = 0; i < counter; i++)
//     {
//         printf(" %d ", dup[i]);
//     }

//     return 0;
// }
