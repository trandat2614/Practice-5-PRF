#include <stdio.h>

int main() {
   
    int n;
    printf ("nhap mot so nguyen n vao: ");
    scanf ("%d", &n);
    printf ("tat ca cac uoc cua  %d la: \n", n);
    for (int i=1; i<=n; i++) {
        if (n%i==0){
            printf ("%d ", i);
        }
    }
    return 0;
}
