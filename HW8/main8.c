#include <stdio.h>

void print_stars(int line){
    int i, j;
    for(i = line-1;i>=1;i--){
        for(j = 1;j<=line-i-1;j++){
            printf(" ");
        }
        for(j = 1;j<=i*2+1;j++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("%*c", line-1, ' ');
    printf("*\n");
    
    for(i = 1;i<=line-1;i++){
        for(j = 1;j<=line-i-1;j++){
            printf(" ");
        }
        for(j = 1;j<=i*2+1;j++){
            printf("*");
        }
        printf("\n");
    }
    
}
int main()
{
    int i = 4;
    print_stars(i);
    return 0;
}

