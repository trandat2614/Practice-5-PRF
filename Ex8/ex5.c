#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    printf("Nhap vao mot chuoi: ");
    gets(s);

    int i = 0;
    while(s[i] != '\0') {
        if(i == 0 || s[i-1] == ' ') {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
        i++;
    }

    printf("Chuoi dang proper: %s\n", s);

    return 0;
}
