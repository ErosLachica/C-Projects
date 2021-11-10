#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25

int main(void) {
    int numHours;
    double basicPay;
    double grossPay;
    double taxes;
    double netPay;

    printf("Enter # of hours worked in a week: ");
    scanf("%i", &numHours);

    // If number of hours exceed 40 calculate overtime pay
    if (numHours > 40) {
        int excessHours = numHours - 40;
        basicPay = 40 * PAYRATE;
        double overtimePay = excessHours * 18.0;
        grossPay = basicPay + overtimePay;
        printf("The gross pay: %.2f\n", grossPay);
    } 
    else {
        basicPay = numHours * PAYRATE;
        grossPay = basicPay;
        printf("The gross pay: %.2f\n", grossPay);
    }

    // Handles Taxes based on grossPay
    if (grossPay <= 300) {
        taxes += grossPay * TAXRATE_300;
    } else if (grossPay <= 450) {
        taxes += 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;
    } else {
        taxes += 300*TAXRATE_300;
        taxes += 150*TAXRATE_150;
        taxes += (grossPay-450)*TAXRATE_REST;
    }
    
    netPay = grossPay - taxes;

    printf("The amount in taxes needed to be paid: %.2f\n", taxes);
    printf("The net payout: %.2f\n", netPay);

    return 0;
}