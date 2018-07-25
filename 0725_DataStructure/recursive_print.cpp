#include<iostream>
using namespace std;

void recursive_print(string str, int idx);
void recursive_print2(string str, int idx);

int main(void) {

	string str = "123";

	//���1. for��
	for (int i = str.size()-1; i > -1; i--) { 
		//string�� ������ null���� ����ϱ� ����
		cout << str[i];
	}
	cout << endl;

	//���2. ���
	recursive_print(str,str.size()-1);
	cout << endl;

	//���2-1. ���:�տ�������
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