#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    printf("Nhap vao mot chuoi: ");
    gets(s);

    for(int i = 0; s[i] != ' '; i++) {
        if (islower(s[i])) {
            s[i]= toupper(s[i]);
        } else if (isupper(s[i])) {
            s[i]= tolower(s[i]);
        }
    }
    printf(" Chuoi sau khi bien doi: %s\n", s );
    return 0;
}