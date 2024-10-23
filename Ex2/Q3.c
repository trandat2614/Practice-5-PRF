#include <stdio.h>
int main(){
    float kw, total;
    printf("Nhap so dien: ");
    scanf("%f", &kw);
    if (kw <= 100) {
        total = kw * 2000; 
    } else if (kw <= 200) {
        total = 100 * 2000 + (kw - 100) * 2500; 
    } else {
        total = 100 * 2000 + 100 * 2500 + (kw - 200) * 3000; 
    }
    printf("Tong tien phai tra cho %.2f  la: %.2f VND\n",kw, total);
    return 0;
}