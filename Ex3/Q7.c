#include <stdio.h>

int main() {
   
    printf("In cuu chuong rut gon: \n");
    for (int i= 1; i<=10; i++) {
        for (int j= 1; j<=10; j++) {
            printf ("%d ", j*i);
        }   
        printf("\n");
    }
    printf ("================================");
    return 0;
}
