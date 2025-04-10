#include <stdio.h>
int logicless_triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        if(j%2==1){
            printf("1");
        }
        else{
            printf("0");
        }
        }
        printf("\n");
    }

}
int main(){
int n;
scanf("%d",&n);
logicless_triangle(n);
return 0;
}