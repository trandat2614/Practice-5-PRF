#include <stdio.h>

int main() {
   
    int n;
    printf ("Enter a positive integer: ");
    scanf ("%d", &n);
    int s1=0, s2=0, s3=0;
    for (int i=1; i<=n; i++) {
        s1 +=i;
        if (i %2 ==0){
            s2 += i;
        } else {s3 += i;}
    }
    printf ("s1 = %d, s2 = %d, s3 = %d", s1, s2, s3);
    
    return 0;
}
