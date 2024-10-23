#include <stdio.h>

int main(){
    int i,j;
    printf ("nhap gia tri cua i:");
    scanf ("%d",&i);
    printf ("nhap gia tri cua j:");
    scanf ("%d",&j);
    printf("!i: %s\n", (!i) ? "true" : "false");
    printf("!j: %s\n", (!j) ? "true" : "false");
    printf("i && j: %s\n", (i && j) ? "true" : "false");
    printf("i || j: %s\n", (i || j) ? "true" : "false");
    

    return 0;

}