#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int count = 0;
    printf("Nhap vao mot chuoi: ");
    gets(s);

    char *token = strtok(s, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    printf("So tu trong chuoi la: %d\n", count);

    return 0;
}
