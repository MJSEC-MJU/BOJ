#include <stdio.h>
int main() {
    int H,M;
    scanf("%d %d", &H,&M);
    if (M<45) {
        if(H==0) {
            printf("%d %d",23, M+60-45);
        }
        else {
            printf("%d %d",H-1,M+60-45);
        }
    }
    else {
        if(H==0) {
            printf("%d %d",H, M-45);
        }
        else {
            printf("%d %d",H,M-45);
        }
    }

    
}