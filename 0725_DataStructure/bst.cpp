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

/*------함수정의-----*/
void display_tree(struct node* root);
void bfs();
void dfs(struct node* cur);
bool bst_search(struct node* cur, int v);

int main(void) {
	/*
	포인터로 하려면 동적할당을 해야함!
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
	root부터 시작(queue에 넣기)
	loop
	queue가 empty이면 종료
	queue가 empty가 아니면
	- queue에서 pop을 해서 현재 노드로
	- 값을 출력
	-queue에 현재 node의 자식들을 enqueue
	*/
	
	while (!q.empty()) {
		cur = q.front();  // 반환
		q.pop(); // 지우기
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

//recursive 방식으로 구현
// pre-Order, In-Order, Post-Order
void dfs(struct node* cur) {
	//Pre-Order
	cout << cur->v<<" ";
	if (cur->left != NULL) dfs(cur->left);
	if (cur->right != NULL) dfs(cur->right);
}

bool bst_search(struct node* cur,int v) {
	while (cur!=NULL) {
		if (cur->v == v) return true; //찾은 경우
		if (cur->v > v) { //작은 경우->왼쪽
			cur = cur->left;
		}
		else { //큰 경우 ->오른쪽
			cur = cur->right;
		}
	}
	return false;
}

void bst_insert(struct node* root,struct node* new_n) {
	if (bst_search(root,new_n->v)==false) { //tree에 값이 없을 때(중복아닐때)
		struct node* parent = root;
		struct node* cur = root;
		
		//넣을 위치 찾기
		while (cur!=NULL) {
			parent = cur;
			if (cur->v > new_n->v) {
				cur = cur->left;
			}
			else {
				cur = cur->right;
			}
		}
		// 넣기
	}
}

