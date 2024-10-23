#include <stdio.h>
int doinhiphan(int n){
    int a[1000];
    int i = 0;
    while (n > 0) {
        
        a[i] = n % 2;  
        n = n / 2; 
        i++;
    }
    printf("\nDang nhi phan cua so vua nhap la = ");  
    for(int j=i-1;j>=0;j--){  
        printf("%d",a[j]);  
    }  
}   
int main(){
    int n;
    printf("Nhap so can chuyen doi: ");
    scanf("%d",&n);
    doinhiphan(n);
    return 0;
}