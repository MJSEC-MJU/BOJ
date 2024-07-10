#include <stdio.h>
#include <string.h>

int main(void) {
    int T;  
    
    
    scanf("%d", &T);
    
    
    char string[1000];
    
    for (int i = 0; i < T; i++) {
        
        scanf("%s", string);
        
       
        int len = strlen(string);
        printf("%c%c\n", string[0], string[len - 1]);
    }
    
    return 0;
}
