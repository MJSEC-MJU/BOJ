#include <stdio.h>
#include <string.h>

int main() {
    char S[101];  
    int P[26];  
    int i;

    for (i = 0; i < 26; ++i) {
        P[i] = -1;
    }
    scanf("%s", S);
    for (i = 0; i < strlen(S); ++i) {
        int idx = S[i] - 'a';  
        
    
        if (P[idx] == -1) {
            P[idx] = i;
        }
    }

    for (i = 0; i < 26; ++i) {
        printf("%d ", P[i]);
    }
    printf("\n");

    return 0;
}
