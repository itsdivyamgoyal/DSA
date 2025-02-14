#include<stdio.h>
#include<math.h>
//To check if the number is amstrong
int num_digits(int i){
    int j=0;
    while(i!=0){
        i/=10;
        j+=1;
    }
    return j;
}
int pow1(int i,int j){
    int m=1;
    for(int k=0;k<j;k++){m*=i;}
    return m;
}
int main(){
    int i=0,j=0,c=0,a,n;
    printf("Enter the number:");
    scanf("%i",&i);
    a=i;
    n=num_digits(a);
    while(i!=0){
        c=i%10;
        i/=10;
        j+=pow1(c,n);
    }
    printf("%d",j);
    if(j==a){
    printf("The Number is amstrong");}
    else printf("The Number is not amstrong");
    return 0;
}