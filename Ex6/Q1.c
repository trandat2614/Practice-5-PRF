#include <stdio.h>
#include <stdlib.h>
void Max(int* count, int* max){
    *count = 0;
    *max = 0;
    while (1){
        int n;
        printf("Nhap so nguyen (0 de thoat): ");
        scanf("%d", &n);
        if (n == 0) break;
        (*count)++;
        if (n > *max) *max = n;
    }
}
int main(){
    int count, max;
    Max(&count, &max);
    printf ("So so nguyen nhap vao la: %d ", count);
    printf ("So lon nhat trong cac so vua nhap la: %d ", max);
    system("pause");
    return 0;
}