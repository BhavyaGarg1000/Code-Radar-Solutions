#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    switch(c){
    case '+':
    printf("%d\n", a+b);
    break;
    case '-':
    printf("%d\n", a-b);
    break;
    case '*':
    printf("%d\n", a*b);
     break;
    case '/':
    printf("%d\n", a/b);
     break;
    default:
    printf("error");
     

    }
     return 0;
}