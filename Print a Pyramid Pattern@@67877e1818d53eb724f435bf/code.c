#include <stdio.h>
int main(){
    int i,sp,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(sp=1;sp<=n-i;sp++){
            printf(" ");
        }
        for(j=1;j<=2*sp-i;j++){
            printf("*");
        }
        printf("\n");
    }
}