#include <stdio.h>
void nhapmang(int n, int a[]){
    printf("Nhap %d so phan tu cua mang:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void insert(int a[],int *n, int k, int x) {
     if (k < 0 || k >= *n) {
        printf("bi tri k khong hop le!\n");
        return;
    }
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
    int size = 7;
    int a[100]= {1,2,3,4,5,6,7};
    insert(a , &size , 2,9);
    printf ("Mang gom %d phan tu la: \n",size);
    for(int i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}