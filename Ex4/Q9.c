#include <stdio.h>
int main (){
    int a,b;
    printf ("nhap 2 so a, b: ");
    scanf ("%d%d",&a,&b);
    printf ("UCLN cua %d va %d la: ", a,b);
    // r = a mod b
    int r = a % b;
    while (r!=0){
        a = b;
        b = r;
        r = a % b;
    }
    printf ("%d\n", b);
    return 0;

}
