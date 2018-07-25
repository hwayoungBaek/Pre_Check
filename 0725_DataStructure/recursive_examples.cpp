#include<iostream>
using namespace std;

int recursive_mul(int idx, int n);
int recursive_sum(int* a, int idx);
int getGCD(int a, int b);

int main(void) {
	int a[5] = {11,12,13,14,15};

	cout<<recursive_mul(2, 5)<<endl;  //x의 n승 계산하기
	//cout << recursive_sum(a,4) << endl; //배열의 합 구하기
	//정수를 2진수로 표현하기
	
	cout << getGCD(12,3) << endl; //최대공약수 구하기
	return 0;
}

int recursive_mul(int idx, int n) {
	if (n == 0) {
		return 1;
	}
	return idx * recursive_mul(idx, n - 1);
}

int recursive_sum(int* a,int idx) {
	if (idx==-1) {
		return 0;
	}
	return a[idx] + recursive_sum(a,idx-1);
}

int makebinary() {
	return 1;
}

int getGCD(int a,int b) {
	if (a%b==0) {
		return b; //gcd
	}
	getGCD(b,a%b);
}