#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i = n % 2 ? 1 : 2;
    int answer = 0;
    
    for (; i <= n; i = i + 2)
        answer += i % 2 ? i : i * i;

    return answer;
}
