#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// babbling_len은 배열 babbling의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;

    const char* sounds[4] = {"aya", "ye", "woo", "ma"};
    const int s_len[4] = {3, 2, 3, 2};

    for (size_t i = 0; i < babbling_len; i++) {
        bool used[4] = {false, false, false, false};
        int b_len = strlen(babbling[i]);
        int pos = 0;
        
        while (pos < b_len) {
            bool matched = false;

            for (int j = 0; j < 4; j++) {
                if (!used[j] && !strncmp(&babbling[i][pos], sounds[j], s_len[j])) {
                    used[j] = true;
                    pos += s_len[j];
                    matched = true;
                    break ;
                }
            }
            if (!matched)
                break;
        }
        if (pos == b_len)
            answer++;
    }

    return answer;
}