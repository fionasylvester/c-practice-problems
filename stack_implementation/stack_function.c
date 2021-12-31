
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <assert.h>

Stack *initialize_stack(int size){
    Stack *mystack;
    mystack = (Stack*)malloc(sizeof(Stack));
    if(NULL== mystack) return NULL;

    mystack-> top= -1;
    mystack-> t_size = size;
    mystack-> arr = (data*) malloc(sizeof(data) *size);

    if(NULL== mystack->arr) return NULL;

    mystack -> op_status = INIT;
    return mystack;
}


int push(Stack *mystack, int data){
    if(mystack == NULL) return FAIL;

    if(mystack-> top >= mystack->t_size-1){
        mystack->op_status = FULL;
        printf("stack is full");
        return FULL;
    }
    mystack ->top++;
    mystack->arr[mystack->top].data= data;

    mystack->op_status = SUCCESS;

    return SUCCESS;
}



int pop_from_top(Stack *mystack){

    if(mystack-> top == -1){
        printf("no elements in stack left to pop");
    }
    int to_pop=mystack->arr[mystack->top].data;
    mystack->top--;
    return to_pop;
}

int pop_till_element(Stack *mystack, int element){
    int to_pop=mystack->arr[mystack->top].data;
    for(int i= mystack->top;i>=0;i--){
        if(element==mystack->arr[mystack->top].data){
            return 1;
        }
        else{
            to_pop=mystack->arr[mystack->top].data;
            mystack->top--;
        }
    }
    return to_pop;
}



