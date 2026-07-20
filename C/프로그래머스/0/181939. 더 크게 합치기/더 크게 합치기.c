#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    char ab[10];
    char ba[10];

    sprintf(ab, "%d%d", a, b);
    sprintf(ba, "%d%d", b, a);

    int result_ab = atoi(ab);
    int result_ba = atoi(ba);
        
    return result_ab > result_ba ? result_ab : result_ba;
}