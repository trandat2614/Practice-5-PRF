#include <stdio.h>

int main() {
   
    int n;
    printf ("Enter a positive integer: ");
    scanf ("%d", &n);
    //kiem tra so nguyen to
    int isPrime = 1;
    if (n <= 1) {
        isPrime = 0;
    }
    else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    }
    else {
        printf("%d is not a prime number.\n", n);
    }
    
    return 0;
}
