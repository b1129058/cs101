#include <stdio.h>
#include <stdbool.h>

int round_func(float f){
    return (int) (f + 0.5f);
}

int main() {
    float i = 2554.49;
    printf("%d", round_func(i));
}

