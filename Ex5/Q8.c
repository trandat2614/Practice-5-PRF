#include <stdio.h>

int ucln(int a, int b){
    int r = a % b;
    while (r!=0){
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
int bcln(int a, int b){
    int bcln = a * b / ucln(a,b);
    return bcln;
}
int main() {
    int a, b;
    printf("Enter two integers: \n ");
    scanf("%d %d", &a, &b);
    printf("UCLN of %d and %d is: %d\n", a, b, ucln(a, b));
    printf("BCNN of %d and %d is: %d\n", a, b, bcln(a, b));
    return 0;  
}