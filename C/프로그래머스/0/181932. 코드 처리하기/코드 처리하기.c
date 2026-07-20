#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* code) {
    int mode = 0;
    int i = 0;
    int idx = 0;
    int len = strlen(code);
    if (len == 0)
        len = 6;
    char* answer = (char*)malloc(strlen(code) + 1);

    while (code[idx]) {
        if (code[idx] == '1')
            mode = 1 - mode;
        else if (!mode && !(idx % 2))
            answer[i++] = code[idx];
        else if (mode && idx % 2)
            answer[i++] = code[idx];
        idx++;
    }
    if (i == 0)
        strcpy(answer, "EMPTY");
    else
        answer[i] = 0;
    return answer;
}