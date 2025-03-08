#include <stdio.h>
int main(){
    char i,j,n;
    scanf("%c",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            printf("%c",&n);
        }
        printf("\n");
    }
}