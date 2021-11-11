#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int findGCD(int x, int y) {
    int i, gcd;

    for(i = 1; i <= x && i <= y; i++) {
        // Check if 'i' is a factor of both int x and y
        if((x % i == 0) && (y % i == 0))
            gcd = i;
    }

    return gcd;
}

float calcAbsValue(float num) {
    if (num < 0) {
        num = num * -1.0;
    }

    return num;
}

float sqrRoot(float x) {
    float guess = 1.0;
    const float epsilon = .00001;
    float returnValue = 0.0;

    if (x < 0) {
        printf("Negative argument passed to sqrRoot function.\n");
        returnValue = -1.0;
    }
    else {
        while (calcAbsValue(guess * guess - x) >= epsilon)
            guess = (x / guess + guess) / 2.0;
        returnValue = guess;
    }

    return returnValue;
}


int main(void) {
    int result = 0;
    float num = -69.0;
    int a = -50;

    printf("The abs value of float %f is: %.2f\n", num, calcAbsValue(num));
    printf("The abs value of int %i is: %.2f\n", a, calcAbsValue(a));

    printf("The gcd of 150 and 35 is %d\n", findGCD(150,35));

    printf("The gcd of 83 and 240 is %d\n", findGCD(83, 240));

    printf("The gcd of 1026 and 405 is %d\n", findGCD(1026, 405));

    printf("%.2f\n", sqrRoot(-3.0));
    printf("%.2f\n", sqrRoot(16.0));
    printf("%.2f\n", sqrRoot(25.0));
    printf("%.2f\n", sqrRoot(9.0));
    printf("%.2f\n", sqrRoot(225.0));
}