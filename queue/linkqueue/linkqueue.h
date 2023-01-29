typedef int data_t;

typedef struct node {
	data_t data;
	struct node * next;
}listnode,*linklist;

typedef struct {
	linklist front;
	linklist rear;
}linkqueue;

linkqueue* queue_creat();
int enqueue(linkqueue* lq,data_t value);
data_t dequeue(linkqueue* lq);
int queue_empty(linkqueue* lq);
void queue_show(linkqueue* lq);
int queue_clear(linkqueue* lq);
linkqueue* queue_free(linkqueue* lq);
