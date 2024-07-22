#include <stdio.h>
int main(void) {
    int t,c;
    int q,d,n,p;
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        scanf("%d",&c);
        q=c/25;
        c=c-q*25;
        d=c/10;
        c=c-d*10;
        n=c/5;
        c=c-n*5;
        p=c;
        printf("%d %d %d %d\n",q,d,n,p);

    }

}