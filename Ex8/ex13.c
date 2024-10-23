#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findMostFrequentChar(char str[]) {
    int freq[256] = {0};
    int maxFreq = 0;
    char maxChar;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            freq[(int)str[i]]++;
            if (freq[(int)str[i]] > maxFreq) {
                maxFreq = freq[(int)str[i]];
                maxChar = str[i];
            }
        }
    }

    printf("Ky tu xuat hien nhieu nhat la '%c' voi %d lan.\n", maxChar, maxFreq);
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    findMostFrequentChar(str);
    return 0;
}
