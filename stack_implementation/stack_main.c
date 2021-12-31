#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "header.h"

int main()
{
    Stack *buf_one;
    int i;
    buf_one = initialize_stack(5);

    push(buf_one,1);
    assert(buf_one->arr->data==1);
    push(buf_one,2);
    assert(buf_one->arr[1].data==2);
    push(buf_one,3);
    push(buf_one,4);
    push(buf_one,5);

    for(i=buf_one->top;i>=0;i--){
        printf("%d",buf_one->arr[i].data);
    }

    printf("\n");

    int popped1 = pop_from_top(buf_one);
    int popped2 = pop_from_top(buf_one);
    printf("popped element is %d\n ",popped1);
    printf("popped element is %d\n ",popped2);

    printf("remaining elements in stack");
    for(i=buf_one->top;i>=0;i--){
        printf(" %d",buf_one->arr[i].data);
    }

    printf("\n");
    pop_till_element(buf_one,2);

    printf("remaining elements in stack");
    for(i=buf_one->top;i>=0;i--){
        printf("%d",buf_one->arr[i].data);
    }

}
