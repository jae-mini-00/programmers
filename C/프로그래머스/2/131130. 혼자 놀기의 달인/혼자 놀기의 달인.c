#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int find_group(int cards[], bool check[], int i)
{
    int score = 0;

    while (check[i])
    {
        check[i] = false;
        score++;
        i = cards[i] - 1;
    }

    return score;
}

// cards_len은 배열 cards의 길이입니다.
int solution(int cards[], size_t cards_len) {
    int answer = 0;
    bool check[cards_len];
    int group1 = 0;
    int group2 = 0;
    int temp = 0;
    
    for (size_t i = 0; i < cards_len; i++)
        check[i] = true;
    
    int i = 0;
    while (i < cards_len) {
        if (check[i])
            temp = find_group(cards, check, i);
        else
            temp = 0;
        
        if (temp > group1) {
            group2 = group1;
            group1 = temp;
        }
        else if (temp > group2)
            group2 = temp;
        i++;
    }
    return group1 * group2;
}