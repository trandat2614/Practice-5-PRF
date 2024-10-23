#include <stdio.h>
#include <ctype.h>
#include <string.h>

void extractDigits(char str[], int digits[], int *count) {
    *count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            digits[(*count)++] = str[i] - '0';
        }
    }
}

int main() {
    char str[100];
    int digits[100], count;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    extractDigits(str, digits, &count);
    if (count > 0) {
        printf("Cac ky tu so trong chuoi la: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", digits[i]);
        }
    } else {
        printf("Khong co ky tu so trong chuoi.");
    }
    return 0;
}
