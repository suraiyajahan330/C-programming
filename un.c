#include<stdio.h>

int main() {
    int num = 452;
    int sum = 0;
    int digit = 0;

    while(num > 0) {
        int value = num % 10;
        sum = sum + value;
        digit++;
        num = num / 10;
    }
    printf("Sum = %d, Digit = %d\n", sum, digit);

return 0;
}