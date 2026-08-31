#include<stdio.h>

int main() {

    int ID;
    char section;
    float quiz_score, attendance;

    printf("Enter Student ID: ");
    scanf("%d", &ID);

    printf("Enter Section Name: ");
    scanf(" %c", &section);

    printf("Enter Quiz Score: ");
    scanf("%f", &quiz_score);

    printf("\nEnter Attendance percentage: ");
    scanf("%f", &attendance);

    printf("\nStudent ID: %d\n", ID);
    printf("Section Name: %c\n", section);

    if( (attendance < 75.0 )|| ( quiz_score < 40.0)) {
        printf("Not Eligible\n");
    } else printf("Eligible\n");

    return 0;
 }



