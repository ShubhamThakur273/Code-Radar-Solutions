#include <stdio.h>
int main(){
    int i,j,sp,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(sp=1;sp<=i-1;sp--){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}