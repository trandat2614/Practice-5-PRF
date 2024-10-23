#include <stdio.h>

int main() {
   
    printf("In bang so: \n");
    for (int i= 1; i<=10; i++) {
        for (int j= i; j<=100; j++) {
            printf ("%d ", j);
            j +=9;
        }   
        printf("\n");
    }
    printf ("================================");
    return 0;
}
