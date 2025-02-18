// Your code here...
#include <stdio.h>
int main(){
        int a;
    scanf("%d",&a);
    if(a<='Z' && a>='A'){
        printf("Uppercase");
    } else if (a<='z' && a>='a'){
        printf("Lowercase");
    }
    return 0;
}