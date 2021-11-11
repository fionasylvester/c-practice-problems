#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "header.h"
int main()
{
    darray *buf_one;
    buf_one= initialize_array(3);
    assert(buf_one->c_size==0&&buf_one->t_size==3);

    insert_data(buf_one,255,0,0,0,0.5);
    insert_data(buf_one,0,255,0,1,0.6);
    insert_data(buf_one,0,0,255,1,0.7);
    assert(buf_one->op_status== SUCCESS);

    count(buf_one);
    set_unset(buf_one);
    highest_intensity(buf_one);
    return 0;
}
