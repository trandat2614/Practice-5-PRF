#include <stdio.h>
int main(){
    int reverse, temp;
    for (int i = 1; i <= 1000; i++){
    reverse=0;
    temp = i;
    while (temp !=0){
        reverse = reverse *10 + temp%10;
        temp /= 10;
    }
    if (reverse==i) {
        printf("%d la so doi xung\n", i);
        }
    }
}
