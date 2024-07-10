#include <stdio.h>

int main(void) {
    int N, M,a,b,c;
    scanf("%d %d", &N, &M);
    int ball[N];
    for (int i = 0; i < N; i++) {
        ball[i] = 0;
    }
    for(int i=0;i<M;i++) {
        scanf("%d %d %d",&a,&b,&c);
        for (int i=a-1;i<b;i++) {
            ball[i]=c;
        }
    }
    for (int i=0;i<N;i++) {
        printf("%d ",ball[i]);
    }
    return 0;
}
