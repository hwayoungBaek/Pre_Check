//a라는 정수에서 n번째 bit가 1인 여부를 확인하는 문제

#include<iostream>
using namespace std;

int main(void) {

	int a = 11;
	int n = 4;

	if ( (a&(1<<n))==1 ) {
		printf("숫자 %d 의 %d번째는 1 입니다.\n",a,n);
	}else {
		printf("숫자 %d 의 %d번째는 1이 아닙니다.\n", a, n);
	}

	return 0;
}
