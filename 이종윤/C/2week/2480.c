#include <stdio.h>
int dice(int a, int b, int c) {
    int max;
    if(a==b && b==c && c==a) {
        return 10000+a*1000;
    }
    if (a==b) return 1000+a*100;
    else if (a==c) return 1000+a*100;
    else if(b==c) return 1000+b*100;
    max=a;
    if (max<b) {
        max=b;
    }
    if (max<c) {
        max=c;
    }
    return max*100;
    
}
int main(void) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",dice(a,b,c));
}