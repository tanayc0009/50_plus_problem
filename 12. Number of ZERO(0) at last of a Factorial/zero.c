#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T, N, last_digit, count = 0;
    long long int factorial = 1;

    printf("Enter Testcase : ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);

        // --------- My way -------
        // while (N)
        // {
        //     factorial *= N;
        //     N--;
        // }

        // ---------- another way -------------
        for (int i = 2; i <= N; i++)
        {
            factorial *= i;
        }

        printf("%lld\n", factorial);

        while (factorial > 0)
        {
            last_digit = factorial % 10;
            if (last_digit == 0)
            {
                count++;
            }
            else
            {
                break;
                exit(1);
            }
            factorial = factorial / 10;
        }
        printf("Number of ZERO : %d\n", count);
        count = 0;

        factorial = 1;
    }

    return 0;
}