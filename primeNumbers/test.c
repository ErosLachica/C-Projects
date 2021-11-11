#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int p;

    int primes[100] = {2, 3};
    int primeIndex = 2;

    bool isPrime;
    
    // Starting at 5 and skipping even numbers
    // even numbers after 2 are not prime
    for (int p = 5; p < 100; p+=2) {
        isPrime = true;

        // Test ensuring value of p does not exceed square root of primes[i]
        for (int i = 1; isPrime && p / primes[i] >= primes[i]; i++)
            // if divisible by any other previous prime numbers
            // p is not a prime number
            if (p % primes[i] == 0)
                isPrime = false;
            if (isPrime == true) {
                primes[primeIndex] = p;
                primeIndex++;
            }
    }

    for (int i = 0; i < primeIndex; i++)
        printf("%i ", primes[i]);

    printf("\n");
    return 0;
}