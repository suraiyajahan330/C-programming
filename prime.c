#include<stdio.h>

int main() {
    int n, flag = 1;
    scanf("%d", &n);

    if(n <= 1){
        printf("Not Prime");
    } else{
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }
    }
        if( flag == 1){
            printf("Prime");

        } else{
            printf("Not Prime");
        }
        return 0;
    }
    
