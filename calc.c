#include<stdio.h>
//calculator
void main(){
float a,b;
char d;
printf("                   Digital Calculator\n");
printf("Enter the first Number :");
scanf("%f",&a);
printf("Enter the operator :");
scanf("%s",&d);
printf("Enter the Second Number :");
scanf("%f",&b);
if (d==42)printf("%f",a*b);
if (d==43)printf("%f",a+b);
if (d==45)printf("%f",a-b);
if (d==47)printf("%.3f",a/b);
if (d==37){
    printf("\n%d",((int)a%(int)b));

}
printf("\n         Thank You");
}