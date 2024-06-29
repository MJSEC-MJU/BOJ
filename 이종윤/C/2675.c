#include <stdio.h>
#include <string.h>
int main() {
    int a, count,len;
    scanf("%d", &a);
    char S[21];
    for (int i=0; i<a; i++) {
        scanf("%d %s",&count, S);
        len = strlen(S);
        for (int k=0; k<len;k++) {
            for (int j=0; j<count;j++) {
            
                printf("%c", S[k]);
            }
        }
        printf("\n");
    }

}