#include <stdio.h>

int main(){
    int a,b;
    printf ("nhap gia tri cua a:");
    scanf ("%d",&a);
    printf ("nhap gia tri cua b:");
    scanf ("%d",&b);
    int n = a + b;
    printf ("n = %d, a = %d, b = %d\n",n,a,b);
    n = ++a + b;
    printf ("n = %d, a = %d, b = %d\n",n,a,b);
    n = a++ + b;
    printf ("n = %d, a = %d, b = %d\n",n,a,b);
    n = --a + b;
    printf ("n = %d, a = %d, b = %d\n",n,a,b);
    n = a-- + b;
    printf ("n = %d, a = %d, b = %d\n",n,a,b);
    n = a + b;
    printf ("n = %d, a = %d, b = %d\n",n,a,b);

    return 0;

}