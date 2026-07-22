#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int k, int d)
{
    long long answer = 0;
    long long max_distance_square = (long long)d * d;

    for (long long x = 0; x <= d; x += k)
    {
        long long remain = max_distance_square - x * x;
        long long max_y = (long long)sqrtl((long double)remain);

        answer += max_y / k + 1;
    }

    return answer;
}