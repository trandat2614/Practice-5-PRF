    #include <stdio.h>
    
    int main(){
        int a,b,c;
        printf ("nhap 3 canh cua tam giac: ");
        scanf ("%d%d%d",&a,&b,&c);
        //tam giac can
        if (a == b == c){
            printf ("Day la tam giac deu");
        } else if (a == b || a == c || b == c) {
            printf ("Day la tam giac can");
        } else if ( c*c==a*a+b*b || b*b ==c*c+a*a || a*a ==b*b+c*c ){
            printf ("day la tam giac vuong");
        } else { printf ("day la tam giac thuong"); }
        return 0;
    }