
#include <stdio.h>
void nhapmang(int n, int a[]){
    printf("Nhap %d so phan tu cua mang:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void inmang(int n, int a[]){
    printf("Cac phan tu trong mang la:\n");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int min (int n, int a[]){
    int min = a[0];
    int vitri = 0;
    for(int i=0; i<n; i++){
        if(a[i] < min){
            min = a[i];
            vitri = i;
        }   
    }
    printf ("vi tri cua phan tu nho nhat la: %d\n", vitri + 1);
    return min;
}
int main (){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    nhapmang(n, a);
    inmang(n, a);
    int min_a = min(n, a);
    printf("Phan tu nho nhat trong mang la: %d\n", min_a);
    return 0;
 
}
