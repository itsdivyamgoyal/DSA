#include<stdio.h>
void main(){
    int i=0,a=1;
    printf("Enter the number:");
    scanf("%i",&i);
    if (i==0){printf("1");}
    else{
    while(i!=1){
        a*=i;
        i-=1;
    }
    printf("%d",a);}
}