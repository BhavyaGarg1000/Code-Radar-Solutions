// Your code here...
#include<stdio.h>
int main(){
    int i,j,n,alpha;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            printf("%c ",alpha+j);
        }
        printf("\n");
    }
    return 0;
}