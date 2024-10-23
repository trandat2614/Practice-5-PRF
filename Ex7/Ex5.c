#include <stdio.h>
void nhapmang(int n, int a[]){
    printf("Nhap %d so phan tu cua mang:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}


void tinh_c(int n, int a[], int b[], int c[]) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}
void inmang(int n, int a[]){
    printf("Cac phan tu trong mang la:\n");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main (){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n], b[n], c[n];
    nhapmang(n, a);
    nhapmang(n, b);
    tinh_c(n,a,b,c);
    inmang(n, c);
}