#include<stdio.h>

int main () {
    int x, a, b, c, sum;
    printf("Enter a 3 digit number: ");
    scanf("%d", &x);

    a = x/100;
    b = (x - (a*100)) / 10;
    c = x - (a*100) - (b*10);

    sum = a + b + c;

    printf("Sum of digits: %d\n", sum);

    return 0;
}