#include <stdio.h>

int main() {
   
    int n ;
    float sum = 0;
    printf ("Enter a positive integer: ");
    scanf ("%d", &n);
    for (int i = 1; i <=n; i++) {
        sum += (float) 1/i;
    }
    printf (" %.3f\n", sum);
    return 0;
}
