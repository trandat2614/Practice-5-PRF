#include <stdio.h>

int main() {
    int x,y;
    printf("nhap x: ");
    scanf("%d", &x);
    if (x>=1) { y =x-1;} else { y =1-x;}
    printf ("y = %d ",y);
    return 0;
}