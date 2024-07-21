#include <stdio.h>
#include <string.h>
#include <math.h>

int charToValue(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else {
        return c - 'A' + 10;
    }
}

int main(void) {
    char N[33]; 
    int B;
    scanf("%s %d", N, &B);

    int len = strlen(N);
    int result = 0;

    for (int i = 0; i < len; i++) {
        result += charToValue(N[i]) * (int)pow(B, len - 1 - i);
    }

    printf("%d\n", result);
    return 0;
}
