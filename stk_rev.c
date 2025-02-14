// To reverse string using stack
#include<stdio.h>
void main(){
    int siz;
    printf("Enter the size:");
    scanf("%d",&siz);
    char arr[siz];
    printf("Enter the string:");
    scanf("%s",arr);
    for(siz-=1;siz>=0;siz-=1){
        printf("%c",arr[siz]);
    }
}