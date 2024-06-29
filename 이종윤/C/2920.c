#include <stdio.h>

int main() {
    int num[8];
    int asc = 1, des = 1; 
    for (int i = 0; i < 8; ++i) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 7; ++i) {
        if (num[i] > num[i + 1]) {
            asc = 0;
            break;
        }
    }
    for (int i = 0; i < 7; ++i) {
        if (num[i] < num[i + 1]) {
            des = 0;
            break;
        }
    }
    if (asc)
        printf("ascending\n");
    else if (des)
        printf("descending\n");
    else
        printf("mixed\n");

    return 0;
}
