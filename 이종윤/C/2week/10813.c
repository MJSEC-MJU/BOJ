#include <stdio.h>

int main(void) {
    int N, M,a,b,c;
    scanf("%d %d", &N, &M);
    int ball[N];
    for (int i = 0; i < N; i++) {
        ball[i] = i+1;
    }
    for(int i=0;i<M;i++) {
        scanf("%d %d",&a,&b);
        c=ball[a-1];
        ball[a-1]=ball[b-1];
        ball[b-1]=c;
    }
    for (int i=0;i<N;i++) {
        printf("%d ",ball[i]);
    }
    return 0;
}
