#include <stdio.h>


int main() {
    int a,b=0,c=0,d=1;
    scanf("%d",&a);
    while(a>0)
    {
        b=a/2;
        c=c+(d*a);
        d=d*10;
        a=a%2;
    }
    printf("%d",c);
    return 0;
}