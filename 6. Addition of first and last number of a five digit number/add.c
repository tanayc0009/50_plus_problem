#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int T, N;
    printf("Enter testcase : ");
    scanf("%d", &T);

    if ((T >= 1) && (T <= 10000))
    {
        for (size_t i = 0; i < T; i++)
        {
            int lastDigit, firstDigit, sum;
            printf("Enter Number : ");
            scanf("%d", &N);
            if ((N >= 0) && (N <= 65535))
            {
                lastDigit = N % 10; // last digit
                N = N / 10;
                while (N != 0)
                {
                    firstDigit = N % 10; // last loop will return the first digit
                    N = N / 10;
                    if (N == 0)
                    {
                        sum = firstDigit + lastDigit; // summation of first digit and last digit
                        printf("Sum = %d\n", sum);
                    }
                }
            }
            else
            {
                printf("Error: Number has exceed the limit(0-65535)\n");
            }
        }
    }
    else
    {
        printf("Error: testcase has exceed the limit(1-10000)\n");
    }

    return 0;
}