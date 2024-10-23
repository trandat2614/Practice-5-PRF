#include <stdio.h>

int main() {
    int n;
    double num, max;

    printf("nhap so phan tu n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("so luong phan tu phai lon hon 0\n");
        return 1;
    }
    printf("nhap so thu 1: ");
    scanf("%lf", &num);
    max = num;

    for (int i = 2; i <= n; i++) {
        printf("nhap so thu %d: ", i);
        scanf("%lf", &num);
        if (num > max) {
            max = num;
        }
    }


    printf("gia tri lon nhat la: %.0lf\n", max);

    return 0;
}