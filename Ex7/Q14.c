#include <stdio.h>
void nhapmang(int n, int a[]){
    printf("Nhap %d so phan tu cua mang:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void del(int a[],int *n, int k) {
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
    for (int i= n-1; i>0; i--){
        if(a[i] %2 ==0){
        del(a, &n, i);
        i++;
        }
    }
    
    printf("Mang sau khi xoa cac so chan la: \n");
    inmang(n, a);
    return 0;
}