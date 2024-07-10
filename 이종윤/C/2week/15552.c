#include <stdio.h> 
int main(void) {
    long t;
    int a,b;
    scanf("%ld", &t);
    for (int i=0;i<t;i++) {
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}