#include<stdio.h>

int main() {

    int i;

    for(i = 1; i <= 30; i++){
        if(i == 21)
        break;
    if( i % 3 != 0)
        continue;
    if( i % 5 == 0)  
        continue; 
          
        printf("%d\n", i);
 }
 
return 0;
}