#include<stdio.h>

int main() {
int num;

printf("Enter a Number: ");
scanf("%d", &num);

if (num % 2 == 0){
    printf("Even Number\n");
} else {
    printf("Odd Number\n");
}
 if (num > 0){
    printf("Positive Number\n");

} else {
    printf("Negative Number\n");
}
return 0;
}