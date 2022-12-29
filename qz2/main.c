#include <stdio.h>
int main() {
    int n = 5, i, j, k;
    for(i = 2*n-1;i>0;i-=2){
        for(k = 2*n-i-1;k>0;k--)
            printf(" ");
        for(j = 1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}