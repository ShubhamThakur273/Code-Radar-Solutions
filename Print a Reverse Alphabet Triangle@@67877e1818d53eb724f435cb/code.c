#include <stdio.h>
int reverse_alpha_tri(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
}


int main(){
    int n;
    scanf("%d",&n);
    reverse_alpha_tri(n);
}