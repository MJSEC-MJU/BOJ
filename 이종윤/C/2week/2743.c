#include <stdio.h>
#include <string.h>

int main(void) {

    char string[101];
    scanf("%s",string);
    int length=strlen(string);
    printf("%d",length);

    return 0;
}