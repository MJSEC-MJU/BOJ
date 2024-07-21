#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(void) {
    char cmd[1000001];
    int alp[26] = {0}; 
    int len;


    fgets(cmd, sizeof(cmd), stdin);


    len = strlen(cmd);


    if (cmd[len - 1] == '\n') {
        cmd[len - 1] = '\0';
        len--;
    }


    for (int i = 0; i < len; i++) {
        if (isalpha(cmd[i])) { 
            char ch = toupper(cmd[i]); 
            alp[ch - 'A']++;
        }
    }


    int max = 0;
    int max_c = -1;
    int count_max = 0;

    for (int j = 0; j < 26; j++) {
        if (alp[j] > max) {
            max = alp[j];
            max_c = j;
            count_max = 1; 
        } else if (alp[j] == max) {
            count_max++; 
        }
    }


    if (count_max > 1) {
        printf("?");
    } else {
        printf("%c", max_c + 'A');
    }

    return 0;
}
