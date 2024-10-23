#include <stdio.h>
void nhapmang(int n, int a[]){
    printf("Nhap %d so phan tu cua mang:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void chengiatri(int *n, int a[], int k,int x) {
    if (k < 0 || k >= *n) {
        printf("Vị trí k không hợp lệ!\n");
        return;
    }
     for (int i = *n; i > k; i--) {
        a[i] = a[i - 1];
    }

    a[k] = x;

    (*n)++;
}


void inmang(int n, int a[]){
    printf("Cac phan tu trong mang la:\n");
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
    inmang (n,a);
    int k;
    printf("Nhap vi tri can chen: ");
    scanf("%d", &k);
    int x;
    printf("Nhap gia tri thay the: ");
    scanf("%d", &x);
    chengiatri(&n, a, k-1, x);
    
    inmang(n, a);
    
    return 0;
}