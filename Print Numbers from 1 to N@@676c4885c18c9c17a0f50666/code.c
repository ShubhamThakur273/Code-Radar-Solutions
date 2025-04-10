#include <stdio.h>
int number(int n){
    int num=0;
    for(int i=1;i<=n;i++){
        printf("%d",i);
        num++;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    number(n);
}