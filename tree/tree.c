#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

bitree * tree_creat() {
	data_t ch;
	bitree * r;
	scanf("%c",&ch);
	if(ch == '#')
		return NULL;
	if(ch != '#') {
		if((r=(bitree *)malloc(sizeof(bitree)))==NULL) {
			printf("malloc is faild\n");
			return NULL;
		}	
	}
	r->data=ch;
	r->left=tree_creat();
	r->right=tree_creat();	
	return r;
}
void preorder(bitree * r) {
	if(r == NULL) {
		return;
	}
	printf("%c ",r->data);
	preorder(r->left);
	preorder(r->right);
}
void inorder(bitree *r) {
	if(r == NULL) {
		return;
	}
	inorder(r->left);
	printf("%c ",r->data);
	inorder(r->right);
}

void posorder(bitree * r) {
	if(r == NULL) {
		return;
	}
	posorder(r->left);
	posorder(r->right);
	printf("%c ",r->data);
}

void levelorder(bitree *r) {


	return;
}




















