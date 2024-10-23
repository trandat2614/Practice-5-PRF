#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindrome(char s[]) {
    int left = 0, right = strlen(s) - 1;

    while(left < right) {
        while(left < right && !isalnum(s[left])) left++;
        while(left < right && !isalnum(s[right])) right--;
        if(tolower(s[left]) != tolower(s[right]))
            return 0;
        left++;
        right--;
    }

    return 1;
}

int main() {
    char s[1000];
    printf("Nhap vao mot chuoi: ");
    gets(s);

    if(isPalindrome(s))
        printf("Chuoi doi xung.\n");
    else
        printf("Chuoi khong doi xung.\n");

    return 0;
}
