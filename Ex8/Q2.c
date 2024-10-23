#include <stdio.h>

int main() {
   char s[1000];
   printf("Nhap vao mot chuoi: ");
   gets(s);
   int i = 0;
           
   int kytuthuong = 0;     
   int kytuhoa = 0;  
      
   while(s[i] != '\0') {
      if(s[i] >= 'a' && s[i] <= 'z') {
         kytuthuong++;}
      if(s[i] >= 'A' && s[i] <= 'Z') {
         kytuhoa++;
      }
      i++;
   }
   printf("Chuoi '%s' co chua: %d ky tu thuong va %d ky tu hoa.", s, kytuthuong, kytuhoa);

   return 0;
}
