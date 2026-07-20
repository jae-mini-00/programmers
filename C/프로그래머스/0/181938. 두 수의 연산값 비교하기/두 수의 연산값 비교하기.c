#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    char ab[10];
    
    sprintf(ab, "%d%d", a, b);
    int result = atoi(ab) > 2 * a * b ? atoi(ab) : 2 * a * b;
    return result;
}