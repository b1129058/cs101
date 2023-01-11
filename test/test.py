#include <stdio.h>
#include <math.h>

void bit(int n){
    int a[33];
    int i;
    for(i = 0;i<32;i++){
        a[i] = n & 1;
        n/=2;
    }
    for(i = 31;i>=0;i--){
        printf("%d", a[i]);
        if(i%4 == 0)
            printf(" ");
    }
}

void pa(int row){
    int i,j;
    for(i = 1;i<=row;i++){
        for(j = 1;j<=(row-i)*2;j++)
            printf(" ");
        for(j = 1;j<=2*i-1;j++){
            if(i == 1 || i == row || j == 1 || j == 2*i-1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void pc(char n){//abs
    char mask = n >> (8-1);
  //char mask = n >> (sizeof(char)*8 - 1)
  
    printf("%d\n", mask);//1111 1111(-) 0000 0000(+)
    printf("%d", (n^mask) - mask);
}

void pb(int row){
    int i, j;
    for(i = row;i>=1;i--){
        for(j = 1;j<=(row-i);j++)
            printf("  ");
        for(j = 1;j<=2*i-1;j++)
            printf("* ");
        printf("\n");
    }
}

void pd(int num){
    int i = 10;
    (i & i-1) ? printf("false") : printf("true");
    printf("%d \n%d ", i, i-1);
    bit(i);
    bit(i-1);
}

void pe() {
    double Pi = 0.0;
    int i = 1;
    for (i = 1; i<500000; i++) {
        if (i & 1)
            Pi += 4.0/(2*i-1);
        else
            Pi -= 4.0/(2*i-1);
        if ((int) (Pi*100000) == 314159)
            break;
    }
    printf("x=%d, Pi=%.5f\n", 2*i-1, (double) (int) (Pi*100000)/100000);
}

void pe_() {
    double Pi = 0.0;
    int i = 0;
    while(! ((int) (Pi*100000) == 314159)){
        i++;
        if (i & 1)
            Pi += 4.0/(2*i-1);
        else
            Pi -= 4.0/(2*i-1);
        
    }
    printf("x=%d, Pi=%.5f\n", 2*i-1, (double) (int) (Pi*100000)/100000);
}

void pf(int r){
    int coef = 1, i;

    for(i = 0;i<=r;i++){
        if(i == 0 || r == 0){
            coef = 1;
        }
        else{
            coef = coef * (r-i+1)/i;
        }
        printf("%5d", coef);
    }
}

int main()
{
    int rowpa = 5;
    int apc  = 120;
    double rangepc = 50.0;
    int i, j;
    
    pa(rowpa);
    pb(rowpa);
    pc(-99);
    pc(99);
    pe();
    pe_();
    for(i = 0;i<=4;i++){
        pf(i);
        printf("\n");
    }
    
    bit(15);
    return 0;
}
