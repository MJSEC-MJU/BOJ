#include <stdio.h>
#include <string.h>
int main() {
    int n,len,count,result;
    
    char S[80];
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        result=0;
        count=0;
        scanf("%s",S);
        len = strlen(S);
        for(int j=0;j<len;j++) {
            if(S[j]=='O') {
                count+=1;
                result+=count;
            }
            else {
                count=0;
            }
        }
        printf("%d\n", result);
    }
    
}