#include <stdio.h>
int main() {
    int exam;
    scanf("%d",&exam);
    if (exam <=100 && exam>=90) {
        printf("A");
    }
    else if (exam <=89 && exam>=80)
    {
        printf("B");
    }
    else if (exam <=79 && exam>=70)
    {
        printf("C");
    }
    else if (exam <=69 && exam>=60)
    {
        printf("D");
    }
    else {
        printf("F");
    }


    
    
}