
#define SUCCESS 1
#define FULL -1
#define FAIL 0
#define INIT 2
#define NOT_INIT 5
#define MERGED 3

typedef struct _data_{
    int data;
}data;


typedef struct _Stack_dynamic_
{
    data *arr;
    int top , t_size;
    int op_status;

}Stack;

Stack *initialize_stack(int size);
int push(Stack *, int data);
int pop_from_top(Stack *);
int pop_till_element(Stack *mystack, int element);
int searchstack();
