#include <stdio.h>
#include <string.h>

void removeChar(char str[], char c) {
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100], c;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &c);
    removeChar(str, c);
    printf("Chuoi sau khi xoa ky tu '%c': %s", c, str);
    return 0;
}
