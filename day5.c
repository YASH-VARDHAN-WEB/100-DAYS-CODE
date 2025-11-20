#include <stdio.h>
#include <math.h>  // Required for pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Input principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter time period in years: ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest (compounded annually)
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Display results
    printf("\nResults:\n");
    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
