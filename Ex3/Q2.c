#include <stdio.h>

int main (){
    int n,m;
    printf ("nhap m,n (m,n >0): \n");
    scanf("%d",&m);
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        printf ("* ");
    }
   	printf("\n");
    for (int i=0; i<m-2; i++){
    	printf("\n");
        printf("* ");
        for (int j=0; j<n-2; j++){
            printf("  ");
        }
        printf("*");
        printf("\n");
    }
    printf("\n");
    for (int i=0; i<n; i++){
    	
        printf ("* ");
    }
    return 0;
}
