#include <stdio.h>

#define Pi 3.14
int main (){
    double r;
    printf("Nhap ban kinh cua hinh tron: ");
    scanf("%d", &r);
    printf("Chu vi hinh tron la: %.2lf\n", 2 * Pi * r);
    double area = Pi * r * r;
    printf("Dien tich hinh tron la: %.2lf\n", area);
    return 0;

}