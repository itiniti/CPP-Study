#include <iostream>
using namespace std;

void array_copy(int A[],int B[],int size);
/* 2���� ���� �迭 �� �ϳ��� �迭�� ��Ҹ� �Է��ϸ� ������ �ٸ� �ϳ��� �迭�� ���簡 �Ǵ� �迭�� �ۼ��϶� ex)A[1]=B[1] */

int main() {
	int A[10];
	int size;
	cout << " �迭�� ũ�� �Է� " << endl; 
	cin >> size;

	for (int i = 0; i < size; i++) {
		cin >> A[i];
	}
	int B[10];
	system("cls");
	array_copy(A, B, size);

}

void array_copy(int A[], int B[], int size) {
	cout << "A[i] : ";
	for (int i = 0; i < size; i++) {
		B[i] = A[i];
		cout << A[i] << " ";
	}
	cout << endl;

	cout << "B[i] : ";
	for (int i = 0; i < size; i++) {
		cout << B[i] << " ";
	}
	cout << endl;

}