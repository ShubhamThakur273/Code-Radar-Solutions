#include <stdio.h>
int main(){
    int i,j,sp,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(sp=1;sp<=n-1;sp++){
            printf(" ");
        }
        for(j=1;j<=2*n-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}