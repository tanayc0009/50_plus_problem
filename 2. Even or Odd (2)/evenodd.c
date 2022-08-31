#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T, i, len;
    char n[101];

    printf("How many numbers you want to check(1-100) : ");
    scanf("%d", &T);
    if ((T < 1) && (T > 100))
    {
        printf("You're out of limit");
        exit(1);
    }

    for (i = 0; i < T; i++)
    {
        scanf("%s", n);

        len = strlen(n);
        printf("last element : %c\n", n[len - 1]);

        if ((n[len - 1] % 2) == 0)
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