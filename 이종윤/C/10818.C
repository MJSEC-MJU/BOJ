#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < N; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("%d %d\n", min, max);
    return 0;
}