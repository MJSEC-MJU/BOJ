#include <stdio.h>
int main() {
    int T=0;
    scanf("%d", &T);
    int a,b;
    for(int i=0; i<T;i++) {
        scanf("%d %d", &a,&b);
        printf("%d\n",a+b);
    };
    return 0;
}