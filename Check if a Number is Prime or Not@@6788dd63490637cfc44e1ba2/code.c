#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if((a==1)||((a/a==0)&&(a>4))){
        printf("Prime");
    }
    else if(a==2){
        printf("Prime");
    }
    
    else{
        printf("Not Prime");
    }
}

