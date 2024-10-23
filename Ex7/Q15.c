#include <stdio.h>
void nhapmang(int n, int a[]){
    printf("Nhap %d so phan tu cua mang:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void insert(int a[],int *n, int k, int x) {
     for (int i = *n; i > k; i--) {
        a[i] = a[i - 1];
    }
    a[k] = x;
    (*n)++;
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
    int x;
    printf("Nhap gia tri can them: ");
    scanf("%d", &x);
    for (int i= 0; i<n; i++){
        if(a[i] %2 ==1 ){
        insert(a, &n, i+1, x);
        i++;
        }
    }
    
    printf("Mang sau khi xoa cac so chan la: \n");
    inmang(n, a);
    return 0;
}