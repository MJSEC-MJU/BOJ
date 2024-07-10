#include <stdio.h>
int main(void) {
    int a,b,c, result_h,result_m;
    scanf("%d %d\n%d",&a,&b,&c);
    if (b+c>=60) {
        result_m=(b+c)%60;
        if (a+(b+c)/60>=24) {
            result_h=a+(b+c)/60-24;
        }
        else {
            result_h=a+((b+c)/60);
        }
    }
    else {
        result_m=b+c;
        result_h=a;
    }
    printf("%d %d",result_h,result_m);

    return 0;
}