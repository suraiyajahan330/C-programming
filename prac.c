#include<stdio.h>

int main() {
     
   char ch = 'D';

   if (ch >= 'A' && ch <= 'Z') {
    ch = ch + 32;
   }
   if (ch >= 'a' && ch <= 'z') {
    ch = ch - 32;
   }

    printf(" %c", ch)   ;
    
    return 0;

}







