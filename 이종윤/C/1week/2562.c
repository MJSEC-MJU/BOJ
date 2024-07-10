#include <stdio.h>

int main() {
    int max = 0;    
    int index = 0;  
    int a;

    for (int i = 0; i < 9; i++) {  
        scanf("%d", &a);  
        
        if (max < a) {  
            max = a;    
            index = i + 1;  
        }
    }

    printf("%d\n%d\n", max, index);  

    return 0;
}
