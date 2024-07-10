#include <stdio.h>
int main() {
    int s;
    int p;
    int j;
    scanf("%d", &s);
    scanf("%d", &p);
    j=p;
    while(p!=0) {
        printf("%d\n", s*(p%10));
        p/=10;

    }
    printf("%d",s*j);
}