#include<stdio.h>
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
void main(){
    int arr[]={5,4,6,9,4,5,2,4,6,6,9,5,5},len=13;
    int f=0;
    for(int k=0;k<len;k++){
        f=0;
        for(int j=0;j<(len-k-1);j++){
            if (arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                f=1;
            }
        }
        if (f==0){
            break;
        }
    }
    int ary[len];
    for(int j=1,k=0;j<len;j+=2,k++){
        ary[j]=arr[k];
    }
    for(int j=0,k=(len/2);j<len;j+=2,k++){
        ary[j]=arr[k];
        
    }
     for (int l=0;l<len;l++){
        printf("%d ",ary[l]);
    }
}