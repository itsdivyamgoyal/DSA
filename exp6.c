//To swap the value of 2 integers without using temporary variable
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first integer:");
    scanf("%i",&a);
    printf("Enter the second integer:");
    scanf("%i",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("The value of first integer is:%i\n",a);
    printf("The value of second integer is:%i\n",b);
    return 0;
    }