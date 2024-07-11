#include <stdio.h>
int main(void) {
    int n,max;
    scanf("%d", &n);
    max=2*n-1;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for (int j=0;j<2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=n-2;i>-1;i--) {
        for (int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for (int j=0;j<2*i+1;j++) {
            printf("*");
        }
        printf("\n");
    }


}