#include <stdio.h>

int main (){
    int nam_sinh, nam_hientai;
    printf("Moi ban nhap nam sinh: ");
    scanf("%d",&nam_sinh);
    printf("Moi ban nhap nam hien tai: ");
    scanf(" %d",&nam_hientai);
    int tuoi = nam_hientai - nam_sinh;
    printf ("Ban sinh nam %d, vay ban %d tuoi",nam_sinh,tuoi);
    getchar();
    return 0;
}