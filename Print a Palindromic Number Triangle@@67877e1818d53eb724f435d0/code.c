#include <stdio.h>
int palindrome(int n){
    for(int i=1;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}


int main(){
    int n;
    scanf("%d",&n);
    palindrome(n);

}