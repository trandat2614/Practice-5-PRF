#include <stdio.h>

int main (){
    char a;
    printf("Nhap mot ky tu: ");
    scanf("%c", &a);
    printf ("ma ASCII tuong ung voi ky tu do la: %d\n", a);
    int b;
    do {
        printf ("nhap mot so nguyen (1->255): ");
        scanf ("%d", &b);
        if (b<1 || b >255){
            printf ("nhap lai, so phai nam trong khoang 1->255\n");
        }
    } while (b<1 || b >255);
    printf ("ky tu co ma ASCII %d la: %c\n", b, b);
    
    return 0;
}