// Rajlaxmi RU-25-11110
/*Read one number. Use independent if blocks to check positive/negative/zero. 
Use modulo to check even or odd. For prime check, use a loop from 2 to n-1 and*/
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check positive, negative or zero (independent if)
    if (n > 0)
        printf("Number is Positive\n");

    if (n < 0)
        printf("Number is Negative\n");

    if (n == 0)
        printf("Number is Zero\n");

    // Check even or odd
    if (n != 0) {
        if (n % 2 == 0)
            printf("Number is Even\n");
        else
            printf("Number is Odd\n");
    }

    // Prime number check
    if (n > 1) {
        for (i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("Number is Prime\n");
        else
            printf("Number is Not Prime\n");
    } else {
        printf("Prime check not applicable\n");
    }

    return 0;
}