#include <stdio.h>


int calc(int b){
    int num = 0;
    while(b != 0){
        if(b & 1)
            num ++;
        b /= 2;
    }
    return num;
}

int main() {
    int i = 129;
    printf("%d", calc(i));
    
}
    

