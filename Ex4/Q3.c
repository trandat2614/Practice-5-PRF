#include <stdio.h>

int main() {
   
    int n;
    printf ("Enter a positive integer: ");
    scanf ("%d", &n);
    int count =0, sum = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 1) {
            count++;
        } else if (i % 3 == 0) {
            sum += i;
        }
    }
    printf ("so luong so tu nhien chia 3 du 1 la %d\n",count);
    printf ("tong cac so tu nhien chia het cho 3 la %d\n", sum);
    return 0;
}
