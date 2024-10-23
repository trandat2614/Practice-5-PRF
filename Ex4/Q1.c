#include <stdio.h>

int main() {
   
    int x,y, tich =1;
    printf ("Enter two integers: \n");
    scanf("%d %d", &x, &y);
    for (int i = 1; i <=y; i++) {
        tich *=x;
    }
    printf ("Tich cua x mu y la %d \n",tich);
    
    return 0;
}
