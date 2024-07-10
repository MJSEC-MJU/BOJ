#include <stdio.h>
int cal(int x, int y) {
    if (x> 0) {
        if (y>0) return 1;
        else return 4;
    }
    if (y>0) return 2;
    return 3;
}
int main(void) {
    int x,y;

    scanf("%d\n%d",&x,&y);
    printf("%d",cal(x,y));

}