#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T, targeted_run, current_run, remaining_ball, ball_played;
    double current_run_rate, asking_run_rate; // run rates

    printf("Enter Testcase : ");
    scanf("%d", &T);

    while (T--)
    {
        // printf("Enter targeted_run, current_run, remaining_ball : ");
        scanf("%d %d %d", &targeted_run, &current_run, &remaining_ball);
        ball_played = 300 - remaining_ball;
        // current_run_rate = ((float)current_run / ball_played) * 6;
        current_run_rate = ((current_run * 1.0) / ball_played) * 6; // typecast by multiplication
        // asking_run_rate = ((float)(targeted_run - current_run + 1) / remaining_ball) * 6;
        asking_run_rate = (((targeted_run - current_run + 1) * 1.0) / remaining_ball) * 6; // typecast by multiplication
        printf("%.2lf %.2lf\n", current_run_rate, asking_run_rate);
    }

    return 0;
}