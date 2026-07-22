#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {
    int** answer = (int**)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++)
        answer[i] = (int*)malloc(sizeof(int) * n);
    
    int j = 0;
    int dic[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
    int x = 0;
    int y = 0;
    int dic_pos = 0;
    
    int move_limit = n - 1;
    int move_count = 0;
    int turn_count = 0;
    
    while (j < n * n) {
        answer[y][x] = j + 1;
        
        if (j == n * n - 1)
            break;

        if (move_count == move_limit) {
            dic_pos = (dic_pos + 1) % 4;
            move_count = 0;
            turn_count++;
            if (turn_count >= 3 && turn_count % 2 == 1)
                move_limit--;
        }
        y += dic[dic_pos][0];
        x += dic[dic_pos][1];   
        move_count++;        
        j++;
    }
    return answer;
}