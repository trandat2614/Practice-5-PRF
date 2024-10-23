#include <stdio.h>
#include <string.h>

void insertString(char str[], char strInsert[], int vt) {
    char newStr[200];
    strncpy(newStr, str, vt);
    newStr[vt] = '\0';
    strcat(newStr, strInsert);
    strcat(newStr, str + vt);
    strcpy(str, newStr);
}

int main() {
    char str[100], strInsert[50];
    int vt;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    printf("Nhap chuoi can chen: ");
    fgets(strInsert, sizeof(strInsert), stdin);
    printf("Nhap vi tri can chen: ");
    scanf("%d", &vt);
    insertString(str, strInsert, vt);
    printf("Chuoi sau khi chen: %s", str);
    return 0;
}
