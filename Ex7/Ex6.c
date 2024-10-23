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
int daydoixung(int n, int a[],int b[]){
    int check = 1;
    for (int i=0; i<n; i++){
        b[i] = a[n-1-i];
    }
    for (int i=0; i<n; i++){
        
        if (a[i] != b[i]){
        check == 0;
        break;}
        
    }
    return check;
   
}

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n], b[n];
    nhapmang(n, a);
    if (daydoixung(n, a, b)){
        printf("Mang doi xung.\n");
    } else {printf ("Mang nay khong doi xung");}
    return 0;
}