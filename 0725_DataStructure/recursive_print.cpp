#include<iostream>
using namespace std;

void recursive_print(string str, int idx);
void recursive_print2(string str, int idx);

int main(void) {

	string str = "123";

	//방법1. for문
	for (int i = str.size()-1; i > -1; i--) { 
		//string의 마지막 null빼고 출력하기 위해
		cout << str[i];
	}
	cout << endl;

	//방법2. 재귀
	recursive_print(str,str.size()-1);
	cout << endl;

	//방법2-1. 재귀:앞에서부터
	recursive_print2(str, 0);
	cout << endl;
	return 0;
}
void recursive_print(string str,int idx) {
	if (idx==-1) {
		return;
	}
	cout << str[idx];
	recursive_print(str,idx - 1);
}

void recursive_print2(string str, int idx) {
	if (idx == str.size()) {
		return;
	}
	recursive_print(str, idx+1);
	cout << str[idx];
}