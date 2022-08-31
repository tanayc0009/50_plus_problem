#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T;
    printf("Enter Testcase : ");
    scanf("%d", &T);

    for (size_t i = 0; i < T; i++)
    {
        int x, y, z;
        printf("Enter three(3) numbers(like 3 2 1) : ");
        scanf("%d %d %d", &x, &y, &z);

        printf("Case %d: ", i + 1);

        if (x <= y && y <= z)
        {
            printf("%d %d %d\n", x, y, z);
        }
        else if (x <= z && z <= y)
        {
            printf("%d %d %d\n", x, z, y);
        }
        else if (y <= x && x <= z)
        {
            printf("%d %d %d\n", y, x, z);
        }
        else if (y <= z && z <= x)
        {
            printf("%d %d %d\n", y, z, x);
        }
        else if (z <= x && x <= y)
        {
            printf("%d %d %d\n", z, x, y);
        }
        else if (z <= y && y <= x)
        {
            printf("%d %d %d\n", z, y, x);
        }
        else
        {
            printf("%d %d %d\n", x, y, z);
        }
    }
    return 0;
}

// if (x <= y && y <= z)
// {
//     printf("%d, %d, %d\n", x, y, z);
// }
// else
// {

//     if (x <= z && z <= y)
//     {
//         printf("%d %d %d\n", x, z, y);
//     }
//     else
//     {

//         if (y <= x && x <= z)
//         {
//             printf("%d %d %d\n", y, x, z);
//         }
//         else
//         {

//             if (y <= z && z <= x)
//             {
//                 printf("%d %d %d\n", y, z, x);
//             }
//             else
//             {

//                 if (z <= x && x <= y)
//                 {
//                     printf("%d %d %d\n", z, x, y);
//                 }
//                 else
//                 {
//                     if (x == y && y == z)
//                     {
//                         printf("%d %d %d\n", x, y, z);
//                     }
//                     else
//                     {
//                         printf("%d %d %d\n", z, y, x);
//                     }
//                 }
//             }
//         }
//     }
// }