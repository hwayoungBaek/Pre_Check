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
	cQ[tail] = v; //0�� �ְ�
	
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
	//������� : k�� �̻��� ������ �̹� ���� ���
	if (bitCount(taken) >= k) return 0;
	//������� : m�бⰡ ���� ���� ���
	if (semester == m) return IMF;

	//�޸����̼�
	int& ret = cache[semester][taken];
	if (ret != -1) return ret;
	ret = IMF;
	//�̹� �б⿡ ���� �� �ִ� ���� �� ���� ���� ���� ������� ã�´�.
	int canTake = (classes[semester] & ~taken);
	//���� ������ �� ���� ���� ������� �ɷ�����.
	for (int i = 0; i < n; ++i)
		if ((canTake&(1 << i)) && (taken&prerequisite[i]) != prerequisite[i])
			canTake &= ~(1 << i);
	//�� ������ ��� �κ������� ��ȸ�Ѵ�.
	for (int take = canTake; take > 0; take = ((take - 1)&canTake)) {
		//�� �б⿡ 1��������� ���� �� �ִ�.
		if (bitCount(take) > l)continue;
		ret = min(ret, graduate(semester + 1, taken | take) + 1);
	}
	//�̹� �б⿡ �ƹ� �͵� ���� ���� ���
	ret = min(ret, graduate(semester + 1, taken));
	return ret;
}*/