// Your code here...
#include<stdio.h>
int main(){
    int i,j,n,alpha;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("%c ",alpha+j);
        }
        printf("\n");
    }
    return 0;
}