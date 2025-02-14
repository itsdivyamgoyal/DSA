//To swap the value of 2 integers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first integer:");
    scanf("%i",&a);
    printf("Enter the second integer:");
    scanf("%i",&b);
    c=a;
    a=b;
    b=c;
    printf("The value of first integer is:%i\n",a);
    printf("The value of second integer is:%i\n",b);
    return 0;
    }