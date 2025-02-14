#include<stdio.h>
 void main(){
    int a,b,c;
    printf("Enter the Limit:");
    scanf("%d",&a);
    for (b=1;b<=a;b+=1){
        for (c=1;c<=b;c+=1){
            printf("* ");
        }
        printf("\n");
    }
 }