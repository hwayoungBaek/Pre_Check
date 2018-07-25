#include<iostream>
using namespace std;

int main(void) {

	int result = 0;
	result = sum(10);
	return 0;
}
int sum(int idx) {
	if (idx==0) {
		return 0;
	}
	return idx + sum(idx-1);
}
