#include <stdio.h>
int main(void) {
    int che[6]={1,1,2,2,2,8};
    int num[6];
    for(int i=0;i<6;i++) {
        scanf("%d ",&num[i]);
    }
    for(int i=0;i<6;i++) {
        printf("%d ",che[i]-num[i]);
    }

}