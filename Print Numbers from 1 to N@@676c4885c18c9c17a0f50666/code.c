 #include <stdio.h>
 int numbers(int n){
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
 }
 int main(){
    int n;
    scanf("%d",&n);
    numbers(n);
 }