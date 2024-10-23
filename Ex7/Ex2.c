
#include <stdio.h>
int nhapmang(int n, int a[]){
    printf("Nhap %d so phan tu cua mang:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
int inmang(int n, int a[]){
    printf("Cac phan tu trong mang la:\n");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int demso (int n, int a[], int x){
    int dem = 0;
    for(int i=0; i<n; i++){
        if(a[i] == x){
            dem++;
        }
    }
    return dem;
}

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    int x;
    printf("Nhap so can dem: ");
    scanf("%d", &x);
    nhapmang(n, a);
    inmang (n, a);
    printf("So %d xuat hien %d lan trong mang.\n", x, demso(n, a, x));
    return 0;
}