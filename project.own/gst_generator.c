#include <stdio.h>

int main() {
    float price, subtotal, gst, discount, total;
    int quantity;

    printf("Enter item price: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &quantity);

    subtotal = price * quantity;
    gst = subtotal * 0.18;
    discount = subtotal * 0.05;
    total = subtotal + gst - discount;

    printf("\n============ RETAIL INVOICE ============\n");
    printf("Subtotal:\t\t\tINR %.2f\n", subtotal);
    printf("GST (18%%):\t\t\tINR %.2f\n", gst);
    printf("Discount (5%%):\t\t\t-INR %.2f\n", discount);
    printf("----------------------------------------\n");
    printf("Grand Total:\t\t\tINR %.2f\n", total);
    printf("========================================\n");

    return 0;
}
