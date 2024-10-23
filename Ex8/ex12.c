#include <stdio.h>
#include <string.h>

void removeWord(char str[], char word[]) {
    char *pos = strstr(str, word);
    if (pos != NULL) {
        int len = strlen(word);
        strcpy(pos, pos + len);
    }
}

int main() {
    char str[100], word[50];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    printf("Nhap tu can xoa: ");
    fgets(word, sizeof(word), stdin);
    word[strlen(word) - 1] = '\0'; // Xoa ky tu xuong dong
    removeWord(str, word);
    printf("Chuoi sau khi xoa tu: %s", str);
    return 0;
}
