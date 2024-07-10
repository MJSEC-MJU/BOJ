#include <stdio.h>
int main(void) {

    int n;
    double max;
    max=0.0;
    double result=0;
    scanf("%d",&n);
    double num[n];
    for(int i=0;i<n;i++) {
        num[n]=0;
    }
    for(int i=0;i<n;i++) {
        scanf("%lf",&num[i]);
        if (max<num[i]) {
            max=num[i];
        }
    }
    for(int i=0;i<n;i++) {
        num[i]=num[i]/max*100;
        result+=num[i];
    }
   
    printf("%f\n",result/n);
}