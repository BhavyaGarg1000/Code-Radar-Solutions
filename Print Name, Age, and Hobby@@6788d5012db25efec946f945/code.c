#include <stdio.h>
int main(){
    char name[20], hobby[30];
    int age;
    scanf("%s",&name);
    scanf("%s",&hobby);
    scanf("%d",&age);
    printf("Name: %s",name);
    printf("\nAge: %d",age);
    printf("\nHobby: %s",hobby);
    return 0;
}