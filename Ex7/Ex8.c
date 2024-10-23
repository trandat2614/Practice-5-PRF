#include <stdio.h>
int nhapmang(int n, int a[]){
    printf("Nhap %d so phan tu cua mang:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
int accessing(int n, int a[]) {
    int check =1;
    int wrongPoint = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            check = 0;
            wrongPoint = i;
            break;
        }
    }
    if (check){
        printf("Mang da duoc sap xep tang dan.\n");
    } else printf("Mang khong tang dan va bi giam o phan tu %d\n", wrongPoint);
    
}
int inmang(int n, int a[]){
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
    int a[n];
    nhapmang(n, a);
    inmang(n, a);
    accessing(n, a);
    return 0;

}