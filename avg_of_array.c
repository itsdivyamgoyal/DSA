//avg of an array
#include<stdio.h>
void main(){
    int arr[5]={1,3,9,68,5};
    int sum=0;
    for(int i=0;i<5;++i)sum+=arr[i];
    printf("%f",sum/5.0);
}