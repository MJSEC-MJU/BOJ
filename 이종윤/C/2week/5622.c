#include <stdio.h>

int main(void) {
    char word[16]; 
    scanf("%s", word);

    int time = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = word[i];
        if (ch >= 'A' && ch <= 'C') {
            time += 3;
        } else if (ch >= 'D' && ch <= 'F') {
            time += 4;
        } else if (ch >= 'G' && ch <= 'I') {
            time += 5;
        } else if (ch >= 'J' && ch <= 'L') {
            time += 6;
        } else if (ch >= 'M' && ch <= 'O') {
            time += 7;
        } else if (ch >= 'P' && ch <= 'S') {
            time += 8;
        } else if (ch >= 'T' && ch <= 'V') {
            time += 9;
        } else if (ch >= 'W' && ch <= 'Z') {
            time += 10;
        }
    }

    printf("%d\n", time);

    return 0;
}