#include <stdio.h>

int main(void) {
    int N, M,a,b,c, tmp;
    scanf("%d %d", &N, &M);
    int ball[N+1];
    for (int i = 1; i < N+1; i++) {
        ball[i] = i;
    }
    for(int i=0;i<M;i++) {
        scanf("%d %d",&a,&b);
        for (int j=0;j<(b-a)/2+1;j++) {
            tmp=ball[a+j];
            ball[a+j]=ball[b-j];
            ball[b-j]=tmp;
        }
    }
    for (int i=1;i<N+1;i++) {
        printf("%d ",ball[i]);
    }
    return 0;
}