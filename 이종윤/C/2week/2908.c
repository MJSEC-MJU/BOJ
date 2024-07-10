#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char A[4], B[4]; 
    
    
    scanf("%s %s", A, B);
    
    
    char temp = A[0];
    A[0] = A[2];
    A[2] = temp;
    
    
    temp = B[0];
    B[0] = B[2];
    B[2] = temp;
    
    if (atoi(A)>atoi(B)) {
        printf("%d",atoi(A));
    }
    else {
        printf("%d",atoi(B));
    }
    
    return 0;
}
