#include <stdio.h>
#include <stdbool.h>
void print_spaces(int num){
    int i;
    for(i = 0;i<num;i++)
        printf(" ");
}

void print_top(int i){
    print_spaces(((i+8)/2)-4);
    printf("X'mas tree !\n");
}


void print_trunk(int num){
    int i;
    for(i = 1;i<=num;i++){
        print_spaces((num+8)/2);
        printf("*\n");
    }
}

void print_stars(int num, int line){
    int i, j;
    for(i = 1;i<=num;i+=2){
        print_spaces(((line-1))/2-(i-1)/2);
        for(j = 1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}

void print_tree(int num){
    print_top(num);
    print_stars(num, num+8);
    print_stars(num+4, num+8);
    print_stars(num+8, num+8);
    print_trunk(num);
}

int main() {
    int i = 5;
    print_tree(i);
}

