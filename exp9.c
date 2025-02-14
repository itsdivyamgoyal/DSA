//To check wether a no. is even or odd
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%i",&a);
    if(a%2==0){
        printf("The number is even");
    }
    else{printf("The number is odd");}
    return 0;
    }