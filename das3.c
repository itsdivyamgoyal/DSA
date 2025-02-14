#include<stdio.h>
void main(){
    int siz;
    int top;
    char new[100];
    printf("Enter the size:");
    scanf("%d",&siz);
    char arr[siz];
    char new[siz];
    top=siz;
    printf("Enter the string:");
    scanf("%s",arr);
    for(siz-=1;siz>=0;siz-=1){
        new[top-siz]=arr[siz];

    }
    int flag=0;
    for (int i=0;i<top;++i){
        if (new[i]!=arr[i]){
            flag=1;
            
        }
    }
}