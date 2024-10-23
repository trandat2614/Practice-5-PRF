#include <stdio.h>
void nhapmang(int n, int a[]){
    printf("Nhap %d so phan tu cua mang:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void del(int a[],int *n, int k) {
    if (k < 0 || k >= *n) {
        printf("Vị trí k không hợp lệ!\n");
        return;
    }
    
   
    for (int i = k; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }

    
    (*n)--;
}
void inmang(int n, int a[]){
    
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int a[n];
    nhapmang(n, a);
    
    int k;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &k);
    
    del(a, &n, k-1);
    
    printf("Mang sau khi xoa phan tu thu %d la:\n", k);
    inmang(n, a);
    return 0;
}