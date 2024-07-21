#include <stdio.h>

int main(void) {
    int n; 
    int x, y; 
    int paper[100][100] = {0}; 

 
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        for (int dx = 0; dx < 10; dx++) {
            for (int dy = 0; dy < 10; dy++) {
                paper[x + dx][y + dy] = 1;
            }
        }
    }


    int black_area = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] == 1) {
                black_area++;
            }
        }
    }


    printf("%d\n", black_area);

    return 0;
}
