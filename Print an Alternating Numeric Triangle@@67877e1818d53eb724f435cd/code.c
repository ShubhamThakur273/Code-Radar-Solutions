#include <stdio.h>
int logicless_triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",(i+j)%2);
        }
        printf("\n");
    }

}
int main(){
    int n;
    scanf("%d",&n);
    logicless_triangle(n);

}