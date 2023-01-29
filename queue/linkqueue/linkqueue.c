#include <stdio.h>
#include <stdlib.h>
#include "linkqueue.h"

linkqueue* queue_creat() {
	linkqueue* lq;
	if((lq=(linkqueue*)malloc(sizeof(linkqueue)))==NULL) {
		printf("malloc lq is failed\n");
		return NULL;
	}
	if((lq->front=(linklist)malloc(sizeof(listnode)))==NULL) {
		printf("malloc front is failed\n");
		free(lq);
		return NULL;
	}
	lq->rear=lq->front;
	lq->front->data=0;
	lq->front->next=NULL;
	return lq;
}
int enqueue(linkqueue* lq,data_t value) {
	if(lq == NULL) {
		printf("lq is NULL\n");
		return -1;
	}
	linklist p;
	if((p=(linklist)malloc(sizeof(listnode)))==NULL){
		printf("malloc new node failed\n");
		return -1;
	}
	p->data=value;
	p->next=NULL;

	lq->rear->next=p;
	lq->rear=p;
	return 0;
}
data_t dequeue(linkqueue* lq) {
	if(lq == NULL) {
		printf("lq is NULL\n");
		return -1;
	}
	linklist p;
	p=lq->front;
	lq->front=lq->front->next;
	free(p);
	return lq->front->data;
}
/*
*
*@return empty - 1;no empty - 0;
*
**/
int queue_empty(linkqueue* lq) {
	if(lq == NULL) {
		printf("lq is NULL\n");
		return -1;
	}
	if(lq->front == lq->rear) {
		return 1;	
	} else {
		return 0;
	}
}
int queue_clear(linkqueue* lq) {
	if(lq == NULL) {
		printf("lq is NULL\n");
		return -1;
	}
	//clear every node ,only keep front -> head node
	linklist p;
	printf("clear:");
	while(lq->front->next!=NULL) {
		p=lq->front;
		lq->front=p->next;
		printf("%d ",p->data);
		free(p);
	}
	puts("");
	return 0;
}
linkqueue* queue_free(linkqueue* lq) {
	if(lq == NULL) {
		printf("lq is NULL\n");
		return lq;
	}
	//free every node
	linklist p;
	printf("free:");
	while(lq->front!=NULL) {
		p=lq->front;
		lq->front=p->next;
		printf("%d ",p->data);
		free(p);
	}
	puts("");
	//free lq
	free(lq);
	lq=NULL;
	return NULL;
}

void queue_show(linkqueue* lq) {
	if(lq == NULL) {
		printf("lq is NULL\n");
		return;
	}
	//show everyone node data
	linklist p;
	p=lq->front->next;
	printf("queueshow:");
	while(p!=NULL) {
		printf("%d ",p->data);
		p=p->next;
	}
	puts("");
	return;
}


