#include<iostream>
#include<vector>
using namespace std;
#define EMPTY -999

int a[5];
int idx = 0;

bool add(int v) {

	if (idx>4) { //full
		return false;
	}
	else {
		a[idx++] = v;
		return true;
	}
}

int del() {
	if (idx==0) { //empty
		return EMPTY;
	}
	else {
		int temp = a[--idx];
		return temp;
	}
}

bool contains(int v) {
	for (int i = 0; i < idx; i++) {
		if (a[i]==v) {
			return true;
		}
	}
	return false;
}

int find(int v) {
	for (int i = 0; i < idx; i++) {
		if (a[i] == v) {
			return i;
		}
	}
	return EMPTY; //없을 때
}

int size() {
	return idx;
}

int main(void) {

	add(0); 
	add(1); 
	add(2); 
	add(3); 
	add(4); 
	add(5); //full ->false
	size(); 
	del(); //3 삭제됨
	size();
	contains(3);  //없음 -> false
	find(3);  // 없음 -> false
	add(3); 
	contains(3);  // true
	find(3);  // return 3
	return 0;
}