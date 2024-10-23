#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    char *token;
    char *words[100];
    int i = 0, j;
    
    token = strtok(str, " \n");
    while (token != NULL) {
        words[i++] = token;
        token = strtok(NULL, " \n");
    }

    for (j = i - 1; j >= 0; j--) {
        printf("%s ", words[j]);
    }
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    printf("Chuoi sau khi dao nguoc cac tu: ");
    reverseWords(str);
    return 0;
}
