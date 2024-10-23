#include <stdio.h>

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    
    for (int i=0; i<n; i++){
        printf ("*");
    }
    printf("\n");
    for (int i=n; i>2; --i){
        
        printf("*");
        for (int j = i-1; j > 2; j--){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    printf("*");
    return 0;
}
