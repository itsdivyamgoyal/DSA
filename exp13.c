#include <stdio.h>
//applicable discount using ternary operator
void main(){
    int a;
    printf("Enter the bill amount:");
    scanf("%d",&a);
    (a>1000) ? printf("Max discount applicable is : %d %%",10):printf("Max discount applicable is : %d %%",5);
    scanf("%d");
}