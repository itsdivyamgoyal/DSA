//To check wether the number is prime or not
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the number:");
    scanf("%i",&a);
    if(a>2){
        b=(a/2)+1;
        c=2;
        for(c;c<=b;c++){
            if((a%c)==0){
                printf("The number is not prime");
                c=0;
                break;
            }
        }
        if(c!=0)(printf("The number is prime"));
        }
    else if(a>0)(printf("The number is prime"));
    else(printf("Incorrect Input"));
    }