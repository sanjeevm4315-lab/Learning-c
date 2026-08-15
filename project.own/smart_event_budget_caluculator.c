//name: Sanjeev M
//date: 2026-07-09
//description: This program is a Smart Event Budget Estimator that calculates the total estimated cost of an event based on user inputs for budget, number of guests, food cost per plate, and decoration costs. It also provides a breakdown of costs including tax and remaining balance.


#include <stdio.h>

int main() {
    // Variables for user input
    int total_guests;
    float cost_per_plate;
    float decoration_cost;
    float total_budget;

    // Constants for fixed costs (Chapter 1 concept)
    const float VENUE_TAX_RATE = 0.05; // 5% flat tax

    // Welcome Message
    printf("=== Welcome to the Smart Event Budget Estimator ===\n\n");

    // Taking User Inputs
    printf("Enter your total available budget (INR): ");
    scanf("%f", &total_budget);

    printf("Enter the total number of guests: ");
    scanf("%d", &total_guests);

    printf("Enter food cost per plate (INR): ");
    scanf("%f", &cost_per_plate);

    printf("Enter fixed decoration & lighting costs (INR): ");
    scanf("%f", &decoration_cost);

    // Chapter 1 Arithmetic Calculations
    float total_food_cost = total_guests * cost_per_plate;
    float subtotal = total_food_cost + decoration_cost;
    float tax_amount = subtotal * VENUE_TAX_RATE;
    float final_total_cost = subtotal + tax_amount;
    
    float cost_per_person = final_total_cost / total_guests;
    float remaining_balance = total_budget - final_total_cost;

    // Displaying the Summary Report
    printf("\n============================================\n");
    printf("               BUDGET REPORT                \n");
    printf("============================================\n");
    printf("Total Guests            : %d\n", total_guests);
    printf("Food Cost Subtotal      : %.2f INR\n", total_food_cost);
    printf("Decoration & Setup      : %.2f INR\n", decoration_cost);
    printf("Venue Tax Applied (5%%) : %.2f INR\n", tax_amount);
    printf("--------------------------------------------\n");
    printf("TOTAL ESTIMATED COST    : %.2f INR\n", final_total_cost);
    printf("Cost Split Per Person   : %.2f INR/person\n", cost_per_person);
    printf("--------------------------------------------\n");
    printf("Remaining Wallet Balance: %.2f INR\n", remaining_balance);
    printf("============================================\n");

    return 0;
}
