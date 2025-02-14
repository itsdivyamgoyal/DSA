//to access array using pointer 
#include<stdio.h>
void main(){
    int arr[5]={8,5,69,4,7};
    int *ptr= arr;
    for(int i=0;i<5;i++){
    printf("%d ",*(ptr + i));}
}