#include <stdio.h>
#include <string.h>

void cut(char *s, char *ho, char *ten) {
    char *lastSpace = strrchr(s, ' '); 
    if (lastSpace != NULL) {
        strncpy(ho, s, lastSpace - s);  
        ho[lastSpace - s] = '\0';       
        strcpy(ten, lastSpace + 1);    
    }
}

int main() {
    char s[1000], ho[100], ten[100];
    printf("Nhap ho va ten: ");
    gets(s);

    cut(s, ho, ten);

    printf("Ho va lot: %s\n", ho);
    printf("Ten: %s\n", ten);

    return 0;
}
