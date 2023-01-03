#include <stdio.h>

void print_roof(int num){
    int i, j;
    for(i = 1;i<=num;i++){
        for(j = 1;j<=(num*2-1-1)/2 - ((i*2-1)-1)/2;j++)
            printf(" ");
        for(j = 1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
    
}

void print_high(int num){
    int j;
    for(j = 1;j<=num*2-1;j++)
        printf("*");
    printf("\n");
    
    for(j = 1;j<=num;j++){
        printf("*");
        printf("%*c", num*2-1-2, ' ');
        printf("*");
        printf("\n");
    }
    
    for(j = 1;j<=num*2-1;j++)
        printf("*");
}

void print_house(int num){
    print_roof(num);
    print_high(num);
}

int main() {
    int i = 4;
    print_house(i);
}

