#include <iostream>
#include <time.h>
using namespace std;
void array_equal(int a[], int b[], int size);
#define SIZE 10
/* 
  ���� ũ���� �迭 2���� ����� ���� �Է��� �� 
  ���� ���� ���� �������� ���ϰ� ���� ���̸� 1(true)�� ��ȯ�ϰ� 
  �ٸ��� 0(false)�� ��ȯ�ϴ� �Լ��� �ۼ��ϱ�.*/


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