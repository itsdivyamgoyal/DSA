//To calculate total,average and percentage marks of 5 subjects
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the marks in first subject:");
    scanf("%i",&a);
    printf("Enter the marks in second subject:");
    scanf("%i",&b);
    printf("Enter the marks in third subject:");
    scanf("%i",&c);
    printf("Enter the marks in fourth subject:");
    scanf("%i",&d);
    printf("Enter the marks in fifth subject:");
    scanf("%i",&e);
    printf("Total marks are:%i\n",a+b+c+d+e);
    printf("The average marks are:%i\n",(a+b+c+d+e)/5);
    printf("The percentage marks are:%i%%\n",(a+b+c+d+e)/5);
    return 0;
    }