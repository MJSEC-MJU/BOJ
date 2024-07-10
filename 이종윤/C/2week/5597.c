#include <stdio.h>
int main(void) {
    int num[30],student,count=0;

    for(int i=0;i<30;i++) {
        num[i]=0;
    }
    for(int i=0;i<28;i++) {
        scanf("%d",&student);
        num[student-1]=1;
    }
    for(int i=0;i<30;i++) {
        if (count==2) {
            return 0;
        }
        if (num[i]==0) {
            printf("%d\n",i+1);
            count++;
        }
    }
    
}