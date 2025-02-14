#include<stdio.h>
// program for simple queue
int stck[20];
int true=1;
int false=0;
int r=-1,f=-1;
int isfull(){
    if ((f==0&&r==19)||f-r==1){
        return(true);
    }
    else return(false);
}
int push(int item){
    if(r==19){
        r=0;
    }
    else{
        r+=1;
        if(f==-1)f+=1;
    }
    stck[r]=item;
    return(1);
}
int pop(){
    printf("%d \n",stck[f]);
    if (f==r){
        f=-1;
        r=-1;
    }
    else f+=1;
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
    while(true){
        int val;
        printf("Select any one option:\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.break\n");
        printf("Enter your choice:");
        scanf("%d",&val);
        if (val==1){
            if (isfull()){
                printf("Queue Overflow\n");
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
                printf("Queue Underflow\n");
                continue;
            }
            else{
                pop();
                continue;
            }
            }
        if (val==3){
            if (isempty()){
                printf("Queue Underflow\n");
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