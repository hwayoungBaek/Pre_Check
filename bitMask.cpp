//a��� �������� n��° bit�� 1�� ���θ� Ȯ���ϴ� ����

#include<iostream>
using namespace std;

int main(void) {

	int a = 11;
	int n = 4;

	if ( (a&(1<<n))==1 ) {
		printf("���� %d �� %d��°�� 1 �Դϴ�.\n",a,n);
	}else {
		printf("���� %d �� %d��°�� 1�� �ƴմϴ�.\n", a, n);
	}

	return 0;
}
