#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int T, num, sqrtOfNum;

    printf("Enter Testcase : ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        printf("Enter a Number : ");
        scanf("%d", &num);

        // --------------- One way ----------------
        // double sqrtNum = sqrt(num);
        // printf("sqrtNum : %lf\n", sqrtNum);
        // printf("ceil : %lf\n", ceil(sqrtNum));
        // printf("floor : %lf\n", floor(sqrtNum));
        // double difference = ceil(sqrtNum) - floor(sqrtNum);

        // if (difference < 0.000001)
        // {
        //     printf("YES\n");
        // }
        // else
        // {
        //     printf("NO\n");
        // }

        // --------------- Another Way (BEST) ---------------

        sqrtOfNum = sqrt(num);
        if (sqrtOfNum * sqrtOfNum == num)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}