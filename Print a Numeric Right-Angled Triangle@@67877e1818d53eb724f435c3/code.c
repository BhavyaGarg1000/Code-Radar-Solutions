// Your code here...
#include<stdio.h>
int main(){
    int i,j,m;
    scanf("%d",&m);
    //scanf("%d",&n);
    for(i=1; i<=m; i++){
        for (j=1; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}