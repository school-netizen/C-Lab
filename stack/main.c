#include <stdio.h>
#include <stdlib.h>

#define max 5
int stack[max],i=0;

int push(int item, int top){
    if(top>=max){
        printf("Overflow");
    }else{
        top=top+1;
        stack[top]=item;
    }
    return top;
}
int pop(int top){
    int item;
    if(top<=0){
        printf("\nUnderflow");
    }else{
        item=stack[top];
        printf("\n%d has been popped.\n",item);
        top=top-1;

    }
    return top;
}

void traverse(int top){
    for(i=top;i>0;i--){
        if(stack[i]!=NULL){
            printf("\n%d",stack[i]);
        }
    }
}

int main()
{
    int item,top=0;
    top = push(5,top);
    top = push(6,top);
    top = push(7,top);
    //printf("\n%d : top",top);
    top = pop(top);
    top = pop(top);
    top = pop(top);
    //free(top);
    //printf("\n%d : top",top);
    traverse(top);
}

