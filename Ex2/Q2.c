#include <stdio.h>

//tinh nam nhuan
int main(){
    int year;
    printf("Nhap vao mot nam: ");
    scanf("%d", &year);
    if (year % 4 == 0 && (year % 100!= 0 || year % 400 == 0)){
        printf("%d la nam nhuan co 366 ngay", year);
    } else {
        printf("%d la nam khong nhuan co 365 ngay", year);
    }
}