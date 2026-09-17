#include<stdio.h>

int main() {

    int i, N, sum;
    sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){
        if(i % 3 == 0)
        continue;

        if(i % 7 == 0)
        break;
   
        sum = sum + i;
}
printf("%d", sum);

return 0;

}