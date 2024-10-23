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
int chanle (int n, int a[]){
    int sochan = 0;
    int sole = 0;
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0){
            sochan +=1;
        }  else {sole +=1;}
    }
    printf ("so so chan trong mang la: %d\n", sochan);
    printf ("so so le trong mang la: %d\n", sole);
    
}
int main (){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    nhapmang(n, a);
    inmang(n, a);
    chanle(n, a);
    return 0;
 
}