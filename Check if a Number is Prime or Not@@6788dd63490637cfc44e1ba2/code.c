#include <stdio.h>
int isprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n % i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    if(isprime(n)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    

}