#include <stdio.h>
#include <string.h>

int main(void) {
    char cmd[100];
    int len;
    scanf("%s",cmd);
    len=strlen(cmd);
    for(int i=0;i<len/2;i++) {
        if(cmd[i]!=cmd[len-i-1]) {
            printf("0");
            exit(0);
        }
    }
    printf("1");

    return 0;

}