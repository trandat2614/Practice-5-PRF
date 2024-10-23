#include <stdio.h>

int find (int c){
    int a=1;
    int sum = 0;
    while (sum<c) {
        sum+=a;
        a++;
    }
    return a-1;
}
int main(){
    int n;
    printf ("Enter c: ");
    scanf ("%d", &n);
    printf ("so nguyen lon nhat thoai man n = %d", find(n));
    return 0;
}