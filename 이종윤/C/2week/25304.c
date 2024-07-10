#include <stdio.h>
int main() {
    int  n,b;
    long long x,a;

 
    scanf("%lld\n%d\n",&x,&n);
    for(int i=0;i<n;i++) {

        scanf("%lld %d",&a,&b);
        x-=(a*b);
    }

    if (x==0) {
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}