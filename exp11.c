//To find roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf("%f",&c);
    d=((b*b)-(4*a*c));
    if(d>0){
        printf("Ther roots of the equation are:%f and%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    }
    else if(d==0){printf("The equation has common roots i.e,:%f",(-b)/(2*a));}
    else(printf("The equation has imaginary roots"));
    return 0;
    }