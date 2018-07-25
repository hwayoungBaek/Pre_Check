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

/*------�Լ�����-----*/
void display_tree(struct node* root);
void bfs();
void dfs(struct node* cur);
bool bst_search(struct node* cur, int v);

int main(void) {
	/*
	�����ͷ� �Ϸ��� �����Ҵ��� �ؾ���!
	//struct node* n1 = (struct node*)malloc(sizeof(struct node));
	//struct node* n2 = (struct node*)malloc(sizeof(struct node));
	//struct node* n3 = (struct node*)malloc(sizeof(struct node));
	//struct node* n4 = (struct node*)malloc(sizeof(struct node));
	n1->v = 1;
	n2->v = 2;
	n3->v = 3;
	n4->v = 4;
	*/
	struct node n1, n2, n3, n4;
	
	n1.v = 4;
	n2.v = 3;
	n3.v = 6;
	n4.v = 1;

	struct Tree tree;
	tree.root = &n1;

	n1.left = &n2;
	n1.right = &n3;
	n2.left = &n4;

	//display_tree(tree.root);

	//q.push(tree.root);
	//bfs();

	//dfs(tree.root);
	
	cout<< bst_search(tree.root,7)<<endl;
	return 0;
}

void display_tree(struct node* root) {
	printf("%d\n", root->v);
	printf("%d     %d\n", root->left->v, root->right->v);
	printf("%d     \n", root->left->left->v);
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
	cout << endl;
}

//recursive ������� ����
// pre-Order, In-Order, Post-Order
void dfs(struct node* cur) {
	//Pre-Order
	cout << cur->v<<" ";
	if (cur->left != NULL) dfs(cur->left);
	if (cur->right != NULL) dfs(cur->right);
}

bool bst_search(struct node* cur,int v) {
	while (cur!=NULL) {
		if (cur->v == v) return true; //ã�� ���
		if (cur->v > v) { //���� ���->����
			cur = cur->left;
		}
		else { //ū ��� ->������
			cur = cur->right;
		}
	}
	return false;
}

void bst_insert(struct node* root,struct node* new_n) {
	if (bst_search(root,new_n->v)==false) { //tree�� ���� ���� ��(�ߺ��ƴҶ�)
		struct node* parent = root;
		struct node* cur = root;
		
		//���� ��ġ ã��
		while (cur!=NULL) {
			parent = cur;
			if (cur->v > new_n->v) {
				cur = cur->left;
			}
			else {
				cur = cur->right;
			}
		}
		// �ֱ�
	}
}

