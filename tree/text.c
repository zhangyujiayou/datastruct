#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(int argc , char *argv[]) {
	bitree * root;
	root=tree_creat();
	printf("preorder:");
	preorder(root);
	puts("");
	printf("inorder:");
	inorder(root);
	puts("");
	printf("posorder:");
	posorder(root);
	puts("");
	levelorder(root);
	return 0;
}

