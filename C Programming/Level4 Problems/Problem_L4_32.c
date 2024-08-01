#include<stdio.h>

int sqrroot(int num) {
    int guess = 1;
    while (guess * guess <= num) {
        guess++;
    }
    return guess - 1;
}

int main() {
    int prime, i, count = 0;

    for (i = 2; i < 1000000; i++) { // start from 2 
        int sum = 0;
        int j = i;

        // Calculate digit sum
        while (j != 0) {
            sum += (j % 10);
            j /= 10;
        }

        // Check if the digit sum is 14
        if (sum == 14) {
            prime = 1;

            // Check if the number is prime
            for (int k = 2; k <= sqrroot(i); k++) {
                if (i % k == 0) {
                    prime = 0;
                    break;
                }
            }

            if (prime) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
