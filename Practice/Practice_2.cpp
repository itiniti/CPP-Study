#include <iostream>
#include <time.h>
using namespace std;
void array_equal(int a[], int b[], int size);
#define SIZE 10
/* 
  같은 크기의 배열 2개를 만들고 값을 입력한 뒤 
  서로 같은 값을 가지는지 비교하고 같은 값이면 1(true)을 반환하고 
  다르면 0(false)을 반환하는 함수를 작성하기.*/


int main() {
	int a[SIZE];
	int b[SIZE];
	for (int i = 0; i < SIZE; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < SIZE; i++) {
		cin >> b[i];
	}
	system("cls");
		for (int j = 0; j < SIZE; j++) {
			cout << a[j] << " ";
		}
		cout << endl;
		for (int j = 0; j < SIZE; j++) {
			cout << b[j] << " ";
		}
		cout << endl;

	

	array_equal(a, b, SIZE);
	



}

void array_equal(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		if (a[i] == b[i]) cout << "1 " ;
		else cout << "0 ";
	}


}