#include<iostream>
#include<stdlib.h>
using namespace std;
#define EMPTY -999
#define SIZE 5

struct a {
	int v;
	struct a* next = NULL;
};
struct a* header = NULL;
struct a* tail= NULL;

void enqueue(int v) {

	if (header==NULL) { // empty
		header = (struct a*)malloc(sizeof(struct a));
		header->v = v;
		header->next = NULL;

		tail = header;
	}
	else {
		struct a* new_n = (struct a*)malloc(sizeof(struct a));
		new_n->v = v;
		new_n->next = NULL;

		tail->next = new_n;
		tail = tail->next;
	}
}

int dequeue() {
	if (header == NULL) { // empty
		return EMPTY;
	}
	else {
		int result = header->v;
		
		struct a* temp_pre = header;
		header = header->next;
		free(temp_pre);
		return result;
	}
}

int main(void) {

	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	
	return 0;
}