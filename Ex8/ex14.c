#include <stdio.h>
#include <string.h>

void countCharFrequency(char str[]) {
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            freq[(int)str[i]]++;
        }
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("Ky tu '%c' xuat hien %d lan.\n", i, freq[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    countCharFrequency(str);
    return 0;
}
