#include <stdio.h>

int main(void) {
    char string[101];
    while (fgets(string, sizeof(string), stdin) != NULL) {
       
        printf("%s", string);
    }
    return 0;
}
