#include <stdio.h>


int f(int x) {
    return 2 * x - 1;
}


int S(int n) {
    int sum = 1; 
    for (int i = 1; i <= n; i++) {
        sum += f(i);
    }
    return sum;
}

int main() {
    int n;

    while (1) {
        printf("Enter positive integer (0 to quit): ");
        scanf("%d", &n);

        if (n == 0) {
            break;
        }
       
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                printf("1");
            }
            printf (" + f(%d)", i);
        }
        printf(" = %d\n", S(n));
    }

    return 0;
}