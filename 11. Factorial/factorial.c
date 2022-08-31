#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T, N;
    long long int factorial = 1;

    printf("Enter Testcase : ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);

        // --------- My way -------
        while (N)
        {
            factorial *= N;
            N--;
        }

        // ---------- another way -------------
        // for (int i = 2; i <= N; i++)
        // {
        //     factorial *= i;
        // }

        printf("%lld\n", factorial);
        factorial = 1;
    }

    return 0;
}