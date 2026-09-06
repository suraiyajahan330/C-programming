#include<stdio.h>

int main() {
    char ch;

printf("Enter a Character: ");
scanf("%c", &ch);

if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch =='I' || ch == 'O' || ch == 'U')) {
    
    if (ch >= 'A' && ch >= 'Z'){

    printf("Uppercase Vowel\n");
} else {
    printf("Lowercase Vowel\n");
}
} else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    if (ch >= 'A' && ch <= 'Z'){
        printf("Uppercase consonant\n");
    } else {
        printf("Lowercase Consonant\n");
    }
}
    return 0;

}



    
    

