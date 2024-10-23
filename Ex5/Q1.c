#include <stdio.h>

int isPrime (int n){
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
    return isPrime;
}
int main (){
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (isPrime(num)){
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }
}