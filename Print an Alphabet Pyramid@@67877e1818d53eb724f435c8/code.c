#include <stdio.h>
int alphatri(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",'A'+i-1);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    alphatri(n);
}