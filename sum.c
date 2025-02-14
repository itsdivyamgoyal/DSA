#include<stdio.h>
//sum of digits of a number
void main(){
    int i=0,sum=0;
    printf("Enter the number:");
    scanf("%i",&i);
    while(1){
        sum+=i%10;
        i/=10;
        if(i==0)break;
    }
    printf("%d",sum);
}