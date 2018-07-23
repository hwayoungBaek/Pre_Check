#include<iostream>
#include<stdlib.h>
using namespace std;
#define EMPTY -999
#define SIZE 5

struct a {
	int v;
	struct a* pre = NULL;  
	// header, tail ���� �� �� ���� tail�ϳ��� ����ϱ� ���ؼ� 
	// ���� ���� ����Ű��
};
struct a* tail= NULL;

void push(int v) {

	if (tail==NULL) { // empty
		tail = (struct a*)malloc(sizeof(struct a));
		tail->v = v;
		tail->pre = NULL;
	}
	else {
		struct a* new_n = (struct a*)malloc(sizeof(struct a));
		new_n->v = v;
		new_n->pre = tail;
		tail = new_n;
	}
}

int pop() {
	if (tail == NULL) { // empty
		return EMPTY;
	}
	else {
		int result = tail->v;
		
		struct a* temp_pre = tail;
		tail = tail->pre;
		free(temp_pre);
		return result;
	}
}

int main(void) {

	push(1);
	push(2);
	pop();
	
	return 0;
}