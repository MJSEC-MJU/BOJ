#include <stdio.h>
#include <string.h>

int main() {
    char STR[1000001];
    int count = 0, len;
    
    scanf("%[^\n]s", STR);
    len = strlen(STR);
    if (len == 1 && STR[0] == ' ') {
        printf("%d", count);
        
        return 0;
    }
    for (int i = 1; i < len - 1; i++) {
        if (STR[i] == ' ') {
            count++;
        }
    }
    
    printf("%d", count + 1);
    
    return 0;
}