#include <stdio.h>
void nhapmang(int n, int a[]){
    printf("Nhap %d so phan tu cua mang:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
int accessing(int n, int a[]){
    int check =1;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            check = 0;
            break;
        }
    }
    return check;
}
int sapxeptangdan (int n,int a[]){
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


void tinh_c(int n, int a[], int b[], int c[]) {
    if (accessing(n,a) == 0 != accessing(n,b) == 0){
        printf ("Mot trong hay mang khong phai day tang dan\n");
    }
    for (int i = 0; i < n; i++) {
        c[2 * i] = a[i]; 
    for (int i = 0; i < n; i++) {
        c[2 * i + 1] = b[i]; 
    }
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
    printf ("So phan tu trong mang la:\n");
    scanf("%d", &n);
    int a[n], b[n], c[n*2];
    nhapmang(n, a);
    nhapmang(n,b);
    tinh_c(n, a, b, c);
    sapxeptangdan (n*2, c);
    inmang(n*2, c);

}