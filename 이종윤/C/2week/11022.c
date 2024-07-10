#include <stdio.h> 
int main(void) {
    long t;
    int a,b;
    scanf("%ld", &t);
    for (int i=0;i<t;i++) {
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i+1,a,b, a+b);
    }
    return 0;
}