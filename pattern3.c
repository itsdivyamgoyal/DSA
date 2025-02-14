#include<stdio.h>
 void main(){
    int a,b,c,d,e;
    printf("Enter the Limit:");
    scanf("%d",&a);
    for (b=1;b<=a;b+=1){
        e=a-b;
        for (d=1;d<=e;d+=1){
            printf("  ");
        }
        for (c=1;c<=b;c+=1){
            printf("* ");
        }
        for (c=1;c<=b-1;c+=1){
            printf("* ");
        }
        printf("\n");
    }
    scanf("%d",&a);
 }