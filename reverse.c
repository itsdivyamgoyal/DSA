#include<stdio.h>
//To reverse a number
main(){
    int i=0,j=0,c=0;
    printf("Enter the number:");
    scanf("%i",&i);
    while(1){
        c=i%10;
        i/=10;
        j*=10;
        j+=c;
        if(i==0)break;
    }
    printf("Reversed number is :%d",j);
}