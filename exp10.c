//To find greatest of three numbers 
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the first number:");
    scanf("%i",&a);
    printf("Enter the second number:");
    scanf("%i",&b);
    printf("Enter the third number:");
    scanf("%i",&c);
    if(a>b && a>c){
        printf("The greatest no. is:%i",a);
    }
    else if(b>a && b>c){
        printf("The greatest no. is:%i",b);
    }
    else{
        printf("The greatest no. is:%i",c);
    }
    }