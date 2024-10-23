#include <stdio.h>

int main() {
    int num, sum = 0;
    
    do{
        printf("Nhap mot so nguyen co 3 chu so: ");
        scanf("%d", &num);
        if (num <100 || num > 999){
            printf("Nhap lai! So phai co 3 chu so.\n");
        }
    } while (num <100 || num > 999);
    int sbd = num;
    do {
            sum += num % 10;
            num /= 10;

    } while (num >0);
    printf ("So %d co tong 3 chu so: %d\n", sbd, sum);
    return 0;
}