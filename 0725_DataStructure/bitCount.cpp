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
		if ( a&(1<<i) ) { //1����
			cnt++;
		}
	}
	return cnt;
}

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