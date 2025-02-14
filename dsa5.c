#include<stdio.h>
#include<stdlib.h>
void main(){
    int x;
    printf("Enter the length :");
    scanf("%d",&x);
    int top=-1;
    int stk[x];
    char kk;
    // printf("Enter A char:");
        
        // scanf("%c",&kk);
    for (int m=0;m<x;m++){
        //printf("Enter A char:");
        printf("jhsjd1\n");
        scanf("%c",&kk);
        printf("jhsjd2\n");
        int k = (int)kk;
        //printf("%d",abs(stk[top]-k));
        if (top!=-1)
        {
        if (abs(stk[top]-k)<=3){
            --top;
        }
        }
        else{
            ++top;
            stk[top]=k;
        }
    }
//     int k=abs("b"-"a");
// printf("%d",k);
}