#include<iostream>
using namespace std;

int bitCount(int a);

int main(void) {

	int a = 3;

	cout << bitCount(a) << endl;

	return 0;
}

int bitCount(int a) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		if ( a&(1<<i) ) { //1있음
			cnt++;
		}
	}
	return cnt;
}

/*
int graduate(int semester, int taken) {
	//기저사례 : k개 이상의 과목을 이미 들은 경우
	if (bitCount(taken) >= k) return 0;
	//기저사례 : m학기가 전부 지난 경우
	if (semester == m) return IMF;

	//메모제이션
	int& ret = cache[semester][taken];
	if (ret != -1) return ret;
	ret = IMF;
	//이번 학기에 들을 수 있는 과목 중 아직 듣지 않은 과목들을 찾는다.
	int canTake = (classes[semester] & ~taken);
	//선수 과목을 다 듣지 않은 과목들을 걸러낸다.
	for (int i = 0; i < n; ++i)
		if ((canTake&(1 << i)) && (taken&prerequisite[i]) != prerequisite[i])
			canTake &= ~(1 << i);
	//이 집합의 모든 부분집합을 순회한다.
	for (int take = canTake; take > 0; take = ((take - 1)&canTake)) {
		//한 학기에 1과목까지만 들을 수 있다.
		if (bitCount(take) > l)continue;
		ret = min(ret, graduate(semester + 1, taken | take) + 1);
	}
	//이번 학기에 아무 것도 듣지 않을 경우
	ret = min(ret, graduate(semester + 1, taken));
	return ret;
}*/