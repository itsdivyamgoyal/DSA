#include<stdio.h>
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int x,f=0,i=0;
    int len=13;

    int arr[]={5,4,6,9,4,5,2,4,6,6,9,5,5};
    scanf("%d",&x);
    while(i<(len-f)){
        if (arr[i]==x){
            f+=1;
            for(int k=len-f,j=i;j<k;j+=1){
                swap(&arr[j],&arr[j+1]);
            }
        }
        else i+=1;
    }
    for (int l=0;l<len;l++){
        printf("%d ",arr[l]);
    }
}