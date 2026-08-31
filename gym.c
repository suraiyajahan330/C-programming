#include<stdio.h>

int main() {
    int age, months_duration;
    char plan_type;
    float price = 0.0;
    float discount_rate = 0.0;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter Months Duration: ");
    scanf("%d", &months_duration);

    printf("Enter Plan type ( B for Basic and P for Premium): ");
    scanf(" %c", &plan_type);
    
    if (months_duration < 1) {
        printf("Invalid Duration");
    }
    if ( plan_type != 'B' && plan_type != 'P') {
        printf("Invalid Plan Type\n");
    }
    if ( plan_type == 'B') {
      price = 1000.0;
    } else if ( plan_type == 'P') {
        price = 2000.0;
    }

    if ( age >= 60 ) {
        discount_rate += 0.20;
    }
    if (months_duration >= 6) {
        discount_rate += 0.10;
    }
    float base_price = price * months_duration;
    float discount_amount = base_price * discount_rate;
    float total_cost = base_price - discount_amount;

    printf("\nMonthly Price: %.0f BDT\n", price);
    printf("Duration: %d\n", months_duration);
    printf("Discount Amount: %.0f BDT\n", discount_amount);
    printf("Total Membership Cost: %.0f BDT\n", total_cost );

    return 0;
}