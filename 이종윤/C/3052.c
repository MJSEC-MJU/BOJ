#include <stdio.h>

int search(int num[], int n) {
    for (int i = 0; i < 10; i++) {
        if (num[i] == n) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, a;
    int remainders[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}; 

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        int remainder = n % 42;
        a = search(remainders, remainder);
        if (a) {
           
            for (int j = 0; j < 10; j++) {
                if (remainders[j] == -1) {
                    remainders[j] = remainder;
                    break;
                }
            }
        }
    }
    int unique_count = 0;
    for (int i = 0; i < 10; i++) {
        if (remainders[i] != -1) {
            unique_count++;
        }
    }

    printf("%d\n", unique_count);

    return 0;
}
