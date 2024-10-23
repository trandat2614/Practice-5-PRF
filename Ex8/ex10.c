#include <stdio.h>
#include <string.h>

void removeNChars(char str[], int vt, int n) {
    int len = strlen(str);
    if (vt + n > len) {
        n = len - vt;
    }
    for (int i = vt; i <= len - n; i++) {
        str[i] = str[i + n];
    }
}

int main() {
    char str[100];
    int vt, n;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    printf("Nhap vi tri bat dau xoa: ");
    scanf("%d", &vt);
    printf("Nhap so ky tu can xoa: ");
    scanf("%d", &n);
    removeNChars(str, vt, n);
    printf("Chuoi sau khi xoa: %s", str);
    return 0;
}
