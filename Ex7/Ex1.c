#include <stdio.h>
int findMax (int a[], int n){
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    return max;
}
int main (){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        printf("Enter element %d: ",i);
        scanf("%d", &a[i]);
    }
    printf ("Max in the array: %d", findMax(a,n));
    return 0;
}