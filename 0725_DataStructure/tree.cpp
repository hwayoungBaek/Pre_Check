#include<iostream>
#include<queue>
using namespace std;

struct node {
	int v;
	struct node* left=NULL;
	struct node* right=NULL;
};

struct Tree {
	struct node* root;
};

queue<struct node*> q;
struct node* cur;

void display_tree(struct node* root);
void dfs(struct node* cur);

int main(void) {
	/*
	//struct node* n1 = (struct node*)malloc(sizeof(struct node));
	//struct node* n2 = (struct node*)malloc(sizeof(struct node));
	//struct node* n3 = (struct node*)malloc(sizeof(struct node));
	//struct node* n4 = (struct node*)malloc(sizeof(struct node));
	n1->v = 1;
	n2->v = 2;
	n3->v = 3;
	n4->v = 4;

	n1->left = NULL;
	n2->left = NULL;
	n3->left = NULL;
	n4->left = NULL;
	n1->right = NULL;
	n2->right = NULL;
	n3->right = NULL;
	n4->right = NULL;
	*/
	struct node n1, n2, n3, n4;
	
	n1.v = 1;
	n2.v = 2;
	n3.v = 3;
	n4.v = 4;

	struct Tree tree;
	tree.root = &n1;

	n1.left = &n2;
	n1.right = &n3;
	n2.left = &n4;

	//display_tree(tree.root);

	//bfs
	//q.push(tree.root);
	//bfs();

	dfs(tree.root);
	return 0;
}

void bfs() {
	/*
	root���� ����(queue�� �ֱ�)
	loop
	queue�� empty�̸� ����
	queue�� empty�� �ƴϸ�
	- queue���� pop�� �ؼ� ���� ����
	- ���� ���
	-queue�� ���� node�� �ڽĵ��� enqueue
	*/
	while (!q.empty()) {
		cur = q.front();  // ��ȯ
		q.pop(); // �����
		cout << cur->v << " ";
		if (cur->left != NULL) {
			q.push(cur->left);
		}
		if (cur->right != NULL) {
			q.push(cur->right);
		}
	}
}

//recursive ������� ����
// pre-Order, In-Order, Post-Order
void dfs(struct node* cur) {
	//Pre-Order
	cout << cur->v<<" ";
	if (cur->left != NULL) dfs(cur->left);
	if (cur->right != NULL) dfs(cur->right);
}

void display_tree(struct node* root) {
	printf("%d\n", root->v);
	printf("%d     %d\n", root->left->v, root->right->v);
	printf("%d     \n", root->left->left->v);
}
