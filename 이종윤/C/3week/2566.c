#include <stdio.h>

int main(void) {
    int map[9][9] = {0};


    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &map[i][j]); 
        }
    }

    int max_num = -1;
    int x = -1, y = -1;


    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max_num < map[i][j]) { 
                max_num = map[i][j];
                y = i + 1; 
                x = j + 1; 
            }
        }
    }


    printf("%d\n%d %d\n", max_num, y, x); 
    return 0;
}
