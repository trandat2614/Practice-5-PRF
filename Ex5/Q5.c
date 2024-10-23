
#include <stdio.h>

int amstrongNumber (int n){
    int sum = 0, temp = n, digit;
    while(temp!=0){
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == n;
}
int main (){
    int n;
    do {
        printf("Enter the range (from 100 to n): ");
        scanf("%d", &n);
        if (n <100){
            printf("Invalid input. Please enter a number greater than or equal to 100: ");
            scanf("%d", &n);
        }

    }
    while (n < 100);
    printf ("Amstrong number from 100 to %d:\n", n);
    for (int i  = 100; i <= n; i++)
        if (amstrongNumber(i)){
            printf("%d ", i);
        }
       
    return 0;
}