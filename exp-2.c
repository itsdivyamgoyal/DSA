#include<stdio.h>
//To print the sum of first n natural numbers
int main(){
    int i,sum,n;
    printf("Enter the value of N:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%i",sum);
    return 0;
}