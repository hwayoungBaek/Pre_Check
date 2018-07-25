#include<iostream>
#include<queue>
using namespace std;

#define SIZE 10

struct data {
	int id;
	string name;
	string phone;
	string email;
};

struct data table[SIZE];

/*------함수정의-----*/

int main(void) {
	
	//table[0].id = 201401001;
	//table[0].name = "김길동";
	//table[0].phone = "01023322";

	int id;
	string name, phone, email;

	cin >> id;
	cin >> name >> phone >> email;
	table[hashfunc(id)].name = name;

	return 0;
}

int hashfunc(int id) {
	return id % SIZE;
}