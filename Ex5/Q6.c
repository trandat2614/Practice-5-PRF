
#include <stdio.h>
int fun(int n){
    int digit;
    while(n!=0){
        digit = n % 10;
        if (digit % 2 == 1 )
        printf("%d ", digit);
        n /= 10;
    }
}
int main (){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Odd digits in the number are: ");
    fun(n);
    return 0;
 
}