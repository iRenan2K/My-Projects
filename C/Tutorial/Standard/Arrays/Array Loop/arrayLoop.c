#include <stdio.h>

int main() {
    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30.0, 35.0};    // each double value is 8 bytes

    printf("\nTotal memory usage: %d bytes", sizeof(prices));
    printf("\nThere are %d values allocated!\n\n", sizeof(prices) / sizeof(prices[0]));

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}