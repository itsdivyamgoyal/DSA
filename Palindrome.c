#include<stdio.h>
//To check if the number is palindrome
main(){
    int i=0,j=0,c=0,a;
    printf("Enter the number:");
    scanf("%i",&i);
    a=i;
    while(1){
        c=i%10;
        i/=10;
        j*=10;
        j+=c;
        if(i==0)break;
    }
    if(j==a){
    printf("The Number is Palindrome");}
    else printf("The Number is not Palindrome");
}