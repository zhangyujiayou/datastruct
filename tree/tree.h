#ifndef _TREE_H__
#define _TREE_H__
typedef char datatype;
typedef struct rootnode {
	datatype data;
	struct rootnode * left;
    struct rootnode * right;
}bitree;

bitree * tree_creat();
void preorder(bitree * r);
void inorder(bitree *r);
void posorder(bitree * r);
void levelorder(bitree *r);
#endif
