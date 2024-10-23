#include <stdio.h>

int main(){
    int a,b,c;
    printf ("nhap 3 so: \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("So lon nhat la: %d\n", (a>b && a>c)? a : (b>c)? b : c);
}