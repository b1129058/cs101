#include <stdio.h>

int get_digit(int n){
    int sum = n % 10;
    n /= 10;
    
    while(n!=0){
        sum *= 10;
        sum += (n % 10);
        n /= 10;
    }
    
    return sum;
}

int main()
{
    int n = 1234;
    int sum = 0;
    
    sum = get_digit(n);
    
    printf("sum = %d\n", sum);
    return 0;
}

