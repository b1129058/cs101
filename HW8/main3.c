#include <stdio.h>
#include <stdbool.h>

void get_binary(int b){
    int num = 0, i;
    bool array[33];
    for(i = 0; i<32;i++){
        if(b & 1)
            array[i] = 1;
        else
            array[i] = 0;
        b /= 2;
        
        
    }
    
    for(i = 31; i>=0;i--){
        printf("%d", array[i]);
        if(!((i) % 4))
            printf(" ");
    }
}

int main() {
    int i = 255;
    get_binary(i);
    
}

