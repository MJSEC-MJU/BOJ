#include <stdio.h>

void convertToBase(int N, int B) {
    char result[33]; 
    int index = 0;

    while (N > 0) {
        int remainder = N % B;
        if (remainder < 10) {
            result[index++] = '0' + remainder;
        } else {
            result[index++] = 'A' + (remainder - 10);
        }
        N /= B;
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");
}

int main(void) {
    int N, B;
    scanf("%d %d", &N, &B);

    convertToBase(N, B);

    return 0;
}
