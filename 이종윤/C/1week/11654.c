#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  
    char number[n + 1];  
    
    scanf("%s", number);  

    int result = 0;  
    
    
    for (int i = 0; i < n; i++) {
        result += number[i] - '0';  
    }

    printf("%d\n", result);  
    return 0;
}
