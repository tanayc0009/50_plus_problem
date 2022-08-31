#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T, N, i, j;
    printf("Enter number of testcase : ");
    scanf("%d", &T);
    if (T <= 10)
    {
        for (i = 0; i < T; i++)
        {
            printf("Enter Number : ");
            scanf("%d", &N);
            printf("Case %d: ", i + 1);

            if ((N >= 1) && (N <= 100000))
            {
                for (j = 1; j <= N; j++)
                {
                    if ((N % j) == 0)
                    {
                        printf("%d ", j);
                    }
                }
                printf("\n");
            }
            else
            {
                printf("number is out of limit (1-100000)\n");
            }
        }
    }
    else
    {
        printf("Error: Testcase must be 1-10");
    }
    return 0;
}