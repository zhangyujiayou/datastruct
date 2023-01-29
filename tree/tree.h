typedef char data_t;
typedef struct rootnode {
	data_t data;
	struct rootnode * left;
    struct rootnode * right;
}bitree;

bitree * tree_creat();
void preorder(bitree * r);
void inorder(bitree *r);
void posorder(bitree * r);
void levelorder(bitree *r);

