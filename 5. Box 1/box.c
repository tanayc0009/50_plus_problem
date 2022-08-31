#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T, N;
    printf("Testcase : ");
    scanf("%d", &T);

    if ((T >= 1) && (T <= 25))
    {
        for (size_t i = 0; i < T; i++)
        {
            printf("Number or * is : ");
            scanf("%d", &N);
            if ((N >= 1) && (N <= 80))
            {
                for (size_t j = 0; j < N; j++)
                {
                    for (size_t k = 0; k < N; k++)
                    {
                        printf("%c", '*');
                    }
                    printf("\n");
                }
                printf("\n");
            }
            else
            {
                printf("Limit exceeds(1-80)\n");
            }
        }
    }
    else
    {
        printf("Exceeds the limits of T(1-25)");
    }
    return 0;
}