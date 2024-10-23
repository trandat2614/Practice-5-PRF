#include <stdio.h>

int main(){
    int i,j;
    printf ("nhap gia tri cua i:");
    scanf ("%d",&i);
    printf ("nhap gia tri cua j:");
    scanf ("%d",&j);
    printf("i > j: %s\n", (i > j) ? "true" : "false");
    printf("i < j: %s\n", (i < j) ? "true" : "false");
    printf("i >= j: %s\n", (i >= j) ? "true" : "false");
    printf("i <= j: %s\n", (i <= j) ? "true" : "false");
    printf("i == j: %s\n", (i == j) ? "true" : "false");
    printf("i != j: %s\n", (i != j) ? "true" : "false");

    return 0;

}