#include <stdio.h>

int main(void) {
    char map[5][15] = {0};


    for (int i = 0; i < 5; i++) {
            scanf("%s", &map[i]); 
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < strlen(map[j])) {
                printf("%c",map[j][i]);
                }
            }
        }

        return 0;
    }
    

