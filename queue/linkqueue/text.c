#include <stdio.h>
#include <stdlib.h>
#include "linkqueue.h"

int main(int argc,const char* argv[]) {
	linkqueue* lq;
	lq=queue_creat();
	if(lq == NULL) {
		return -1;
	}
	enqueue(lq,1);
	enqueue(lq,2);
	enqueue(lq,3);
	enqueue(lq,4);
	enqueue(lq,5);
	enqueue(lq,6);
	enqueue(lq,7);

	queue_show(lq);
	
	while(!queue_empty(lq)) {
		printf("dequeue:%d\n",dequeue(lq));
	}
	queue_show(lq);
	
	enqueue(lq,1);
	enqueue(lq,2);
	enqueue(lq,3);
	enqueue(lq,8);
	enqueue(lq,9);
	enqueue(lq,0);
	queue_show(lq);

	queue_clear(lq);
	queue_show(lq);

	enqueue(lq,11);
	enqueue(lq,22);
	enqueue(lq,33);
	enqueue(lq,33);
	enqueue(lq,44);
	queue_show(lq);

	dequeue(lq);
	dequeue(lq);
	dequeue(lq);

	queue_show(lq);

	lq=queue_free(lq);
	queue_show(lq);
	return 0;
}
