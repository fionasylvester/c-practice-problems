#include <stdio.h>
#include <stdlib.h>
#include "header.h"

darray * initialize_array(int size)
{
    darray *myarray;
    myarray = (darray*)malloc(sizeof(darray));
    if(NULL== myarray)return NULL;

    myarray->c_size= 0;
    myarray->t_size= size;
    myarray->arr= (pixel*)malloc(sizeof(pixel)*size);

    if(NULL==myarray->arr) return NULL;
    myarray->op_status = INIT;
    return myarray;

}

int insert_data(darray *myarray, unsigned int r,unsigned int g,unsigned int b, unsigned int opacity, float intensity)
{
    if(myarray == NULL) return FAIL;

    if(myarray->c_size == myarray ->t_size){
        myarray->op_status = FULL;
        return FULL;
    }
    (myarray->arr[myarray->c_size].r)= r;
    (myarray->arr[myarray->c_size].g)= g;
    (myarray->arr[myarray->c_size].b)= b;
    (myarray->arr[myarray->c_size].opacity)= opacity;
    (myarray->arr[myarray->c_size].intensity)= intensity;
    myarray ->c_size++;

    myarray->op_status = SUCCESS;
    return SUCCESS;
}

void count(darray *myarray){
    int rcount=0,gcount=0,bcount=0,i;
    for(i=0;i<myarray->t_size;i++)
        if(myarray->arr[i].r== 255 && myarray->arr[i].g==0 && myarray->arr[i].b==0)
            rcount++;
        else if(myarray->arr[i].r== 0 && myarray->arr[i].g==255 && myarray->arr[i].b==0)
            gcount++;
        else if(myarray->arr[i].r== 0 && myarray->arr[i].g==0 && myarray->arr[i].b==255)
            bcount++;
    printf("%d,%d,%d \n", rcount,gcount,bcount);
}

void set_unset(darray *myarray){
    int i;
    for(i=0;i<myarray->c_size;i++){
        if (myarray->arr[i].opacity==0)
            myarray->arr[i].opacity=1;
        else
            myarray->arr[i].opacity=0;
    }
    for(i=0;i<myarray->c_size;i++){
        printf("%d ",myarray->arr[i].opacity);
    }
}

void highest_intensity(darray *myarray){
    int i;
    float MAX=0;
    for(i=0;i<myarray->c_size;i++){
        if(myarray->arr[i].intensity>MAX)
            MAX=myarray->arr[i].intensity;
    }
    printf("\n%.2f", MAX);
}

