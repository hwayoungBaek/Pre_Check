#include<iostream>
using namespace std;

#define SIZE 3
#define EMPTY -999

int cQ[3]; //circular queue
int top = 0;
int tail = 0;

int enqueue(int v);
int dequeue();
void recursive_print(string str, int idx);
void recursive_print2(string str, int idx);

int recursive_mul(int idx, int n);
int main(void) {

	/*
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	*/
	cout<<recursive_mul(2, 5);
	return 0;
}
int recursive_mul(int idx,int n) {
	if (n==0) {
		return 1;
	}
	return idx*recursive_mul(idx,n-1);
}

/*
int enqueue(int v) {
	
    if ((tail + 1) % SIZE == top) {//full
		//top = (top + 1) % SIZE;
		return 0; //enqueue failed
	}
	tail = (tail + 1) % SIZE;
	cQ[tail] = v; //0에 넣고
	
	return 1;
}

int dequeue() {
	if (top==tail) { //empty
		return EMPTY;
	}
	top = (top + 1) % SIZE;
	int temp = cQ[top];
	
	return temp;
}
*/

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