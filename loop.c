#include<stdio.h>

int main() {
   int num;
   int rev = 0;

   printf("Enter a number: ");
   scanf("%d", &num);
   int original = num;
   
   while ( num > 0) {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
   }
   if (rev == original ) {
    printf("Palindrome Number\n");
    
   } else {
    printf("Not Palindrom \n");
   }
   return 0;
}
