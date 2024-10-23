#include <stdio.h>

int main (){
    int n;
    printf ("nhap so dong cua tam giac: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for (int j=i; j>0; j--){
        printf ("*  ");
        }
        printf ("\n");
    }
}