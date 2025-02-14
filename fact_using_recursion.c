#include<stdio.h>
int fact(int a){
    if(a>1)return(a*fact(a-1));
    else return 1;
}
 void main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("%d",fact(a));}