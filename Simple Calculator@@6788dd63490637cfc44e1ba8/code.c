#include <stdio.h>
int main() {
    int a,b;
    char ch;
    scanf("%d %d",&a,&b);
    
    
    scanf("%c",&ch);
     switch(ch){
        case '+':
        printf("%d\n",a+b);
        break;

        case '-':
        printf("%d\n",a-b);
        break;

        case '*':
        printf("%d\n",a*b);
        break;
        
        case '/':
        printf("%d\n",a/b);
        break;
        }
        return 0;

}