
#include <stdio.h>
int main(){
    int n;
    printf("nhap so n: ");
    scanf("%d", &n);
    int reverse=0;
    int temp = n;
    while (n !=0){
        reverse = reverse *10 + n%10;
        n /=10;
    }
    if (reverse==temp) {
        printf("%d la so doi xung\n", temp);
    } else printf("%d khong la so doi xung\n", temp);
    return 0;
}