#include <stdio.h>

// Function to check if number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= num; i++) {  // Check up to sqrt(num)
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a Prime Number.\n", n);
    } else {
        printf("%d is NOT a Prime Number.\n", n);
    }

    return 0;
}
