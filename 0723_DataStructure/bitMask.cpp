//a��� �������� n��° bit�� 1�� ���θ� Ȯ���ϴ� ����

#include<iostream>
using namespace std;

bool nthbitOne(int a, int n) {
	if ((a&(1 << (n - 1))))
		return true;
	else
		return false;
}

int main(void) {

	int a = 11;
	int n = 4;

	if (nthbitOne(a,n)==true) {
		printf("���� %d �� %d��°�� 1 �Դϴ�.\n", a, n);
	}
	else {
		printf("���� %d �� %d��°�� 1�� �ƴմϴ�.\n", a, n);
	}

	return 0;
}
