#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T, i, n;
    printf("How many numbers you want to check(1-100) : ");
    scanf("%d", &T);
    if ((T < 1) && (T > 100))
    {
        printf("You're out of limit");
        exit(1);
    }

    for (i = 0; i < T; i++)
    {
        scanf("%d", &n);
        if ((n % 2) == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}