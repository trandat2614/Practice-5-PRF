#include <stdio.h>

int day(int m,int year){
    
    if (m == 2){
     if (year % 4 == 0 && (year % 100!= 0 || year % 400 == 0)){
        printf("Thang 2 co 29 ngay\n"); 
        } else {
        printf("Thang 2 co 28 ngay\n");
        }
    } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 ||  m == 10 || m == 12){
        printf ("Thang %d co 31 ngay\n", m);
    } else if (m == 6 || m == 9 || m == 11 ){
        printf ("Thang %d co 30 ngay\n", m);
    }
}
int main(){
    int year;
    printf("Nhap nam vao ");
    scanf("%d", &year);
    printf("Nam %d co lich la:\n", year);
    for (int i = 1; i<=12; i++){
        day(i, year);
    }
    return 0;
}