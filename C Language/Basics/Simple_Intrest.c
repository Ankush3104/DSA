#include<stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Better variable names for clarity
    printf("=== Simple Interest Calculator ===\n\n");

    // Input with validation
    do {
        printf("Enter the Principal Amount (> 0): ");
        scanf("%f", &principal);
        if (principal <= 0) {
            printf("Please enter a valid positive amount!\n");
        }
    } while (principal <= 0);

    do {
        printf("Enter the Rate of Interest (%% per year and only type numbers): ");
        scanf("%f", &rate);
        if (rate <= 0) {
            printf("Please enter a valid positive rate!\n");
        }
    } while (rate <= 0);

    do {
        printf("Enter the Time period (years): ");
        scanf("%f", &time);
        if (time <= 0) {
            printf("Please enter a valid positive time period!\n");
        }
    } while (time <= 0);

    simple_interest = (principal * rate * time) / 100;

    // Formatted output
    printf("\n=== Results ===\n");
    printf("Principal Amount: Rs. %.2f\n", principal);
    printf("Rate of Interest: %.2f%%\n", rate);
    printf("Time Period: %.1f years\n", time);
    printf("Simple Interest: Rs. %.2f\n", simple_interest);
    printf("Total Amount: Rs. %.2f\n", principal + simple_interest);

    return 0;
}