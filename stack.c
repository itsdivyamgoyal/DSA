#include<stdio.h>
int stck[20];
int true=1;
int false=0;
int f=-1;
int isfull(){
    if ((f==19)){
        return(true);
    }
    else return(false);
}
int push(int item){
    f+=1;
    stck[f]=item;
    return(1);
}
int pop(){
    printf("%d \n",stck[f]);
    f-=1;
    return(1);
}
void peek(){
    printf("%d\n",stck[f]);
}
int isempty(){
    if(f==-1){
        return(true);
    }
    else return(false);
}
void main(){
    int val;
    while(true){
        
        printf("Select any one option:\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.break\n");
        printf("Enter your choice:");
        scanf("%d",&val);
        if (val==1){
            if (isfull()){
                printf("Stack Overflow\n");
                continue;
            }
            else{
                printf("Enter the value:");
                scanf("%d",&val);
                push(val);
                continue;
            }}
        if (val==2){
            if (isempty()){
                printf("Stack Underflow\n");
                continue;
            }
            else{
                pop();
                continue;
            }
            }
        if (val==3){
            if (isempty()){
                printf("Stack Underflow\n");
                continue;
            }
            else{
                peek();
                continue;
            }
        }
        if (val==4){
            break;
        }
    }

}