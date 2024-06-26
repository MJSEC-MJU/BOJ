#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int A;
    int B;
    int C;
    char a[10];
    char b[10];
    char c[10];

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    printf("%d\n", A + B - C);
    sprintf(a, "%d", A);
    sprintf(b, "%d", B);
    sprintf(c, "%d", C);
    
    strcat(a, b);
    printf("%d", atoi(a)-atoi(c));

    return 0;
}