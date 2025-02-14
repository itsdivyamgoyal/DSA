#include<stdio.h>
//fibonacci series
void main(){
    int i=0,a=0,b=1,c=2,m;
    printf("Enter the limit:");
    scanf("%i",&i);
    if (i>2){
        printf("The series is \n1\n2");
        while (a<(i-2)){
            m=b+c;
            printf("\n%d",m);
            b=c;
            c=m;
            a+=1;
        }
}
    if(i==1)
    printf("The series is \n1");
    if(i==2)
    printf("The series is \n1\n2");
}