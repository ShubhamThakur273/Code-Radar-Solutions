#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase\n");
    }
    if(ch==int){
        printf("Not an alphabet");
    }
    else{
        printf("Lowercase\n");
    }
    
    
    return 0;
}