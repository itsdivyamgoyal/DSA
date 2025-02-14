#include<stdio.h>
 void new(int arr[]){
   printf("%d",sizeof(arr[0]));
 }
 void main(){
    int a1[]={1,5,6,98,6,4,6,7,8,9};
    new(a1);
 }