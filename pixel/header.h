#include <stdio.h>
#include <stdlib.h>
#define INIT 2
#define FULL -1
#define SUCCESS 1
#define FAIL 0


struct _pixel_ {
    unsigned int r,g,b;
    unsigned int opacity;
    float intensity;
};
typedef struct _pixel_ pixel;

struct _array_{
    pixel *arr;
    int c_size, t_size;
    int op_status;
};

typedef struct _array_ darray;
darray * initialize_array(int size);
int insert_data(darray *myarray, unsigned int r,unsigned int g,unsigned int b, unsigned int opacity, float intensity);

void count(darray *myarray);
void set_unset(darray *myarray);
void highest_intensity(darray *myarray);
