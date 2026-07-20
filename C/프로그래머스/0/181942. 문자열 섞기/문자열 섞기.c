#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* str1, const char* str2) {
    int len = strlen(str1);
    char* answer = (char*)malloc(len * 2 + 1);
    
    for (int i = 0; i < len; i++) {
        answer[i * 2] = str1[i];
        answer[i * 2 + 1] = str2[i];
    }
    answer[len * 2] = '\0';
    
    return answer;
}