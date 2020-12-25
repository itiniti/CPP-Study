#include <iostream>
using namespace std;

void array_copy(int A[],int B[],int size);
/* 2개의 정수 배열 중 하나의 배열에 요소를 입력하면 나머지 다른 하나의 배열에 복사가 되는 배열을 작성하라 ex)A[1]=B[1] */

int main() {
	int A[10];
	int size;
	cout << " 배열의 크기 입력 " << endl; 
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