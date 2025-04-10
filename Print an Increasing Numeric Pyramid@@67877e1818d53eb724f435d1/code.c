#include <stdio.h>
int pyramid(int n){
    for(int i=1;i<=n;i++){
        for(int sp=1;sp<=2*i-1;sp++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    pyramid(n);

}