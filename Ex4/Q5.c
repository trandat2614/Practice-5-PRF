#include <stdio.h>

int main() {
   
    int n;
    int tich =1;
    printf ("Enter a positive integer: ");
    scanf ("%d", &n);
    if (n==0)   printf ("!%d = 1", n);
    else {
        for (int i=1; i<=n; i++) {
            tich *= i;
        }
    }
    printf ("!%d = %d", n, tich);

    return 0;
}
