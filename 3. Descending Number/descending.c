#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i = 1000; i >= 1; i--)
    {
        if ((i < 1000) && ((i % 5) == 0))
        {
            printf("\n");
        }
        printf("%d\t", i);
    }
    return 0;
}