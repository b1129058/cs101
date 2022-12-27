#include <stdio.h>

int main()
{
    
    int year = 2022;
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("true") : printf("false");
}
