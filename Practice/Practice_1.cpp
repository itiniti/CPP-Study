#include <iostream>
#include <time.h>

using namespace std;


// ũ�Ⱑ 10�� �迭�� ������ �����ϰ� �ִ밪�� �ּҰ��� ����ϴ� ���α׷��� �ۼ�

int main() {
	/* !! 1�� ���
	int max=0, min=0; // �ִ� �ּҰ� ���� ����
	int A[10]; // �迭 ����
	srand((unsigned)time(NULL)); // �ð��� �����Ͽ� ������ ����
	for (int i = 0; i < 10; i++) { // �迭�� ���� �ϳ��� ����
		A[i] = rand();
		cout << A[i] << endl;
	}
	int index = A[0]; // �ִ밪 ������ �ӽú���
	int index2 = A[0]; // �ּҰ� ������ �ӽ� ����
	for (int i = 0; i < 10; i++) {

		if (A[i] >= index) {
			index = A[i];
			max = A[i];
		}
		else if(A[i]<index2){
			index2 = A[i];
			min = A[i];

		}

	}
	*/ //2�� ���
	int A[10]; // �迭 ����
	srand((unsigned)time(NULL)); // �ð��� �����Ͽ� ������ ����
	for (int i = 0; i < 10; i++) { // �迭�� ���� �ϳ��� ����
		A[i] = rand();
		cout << A[i] << endl;
	}
	int max = A[0]; // �ִ밪 ������ �ӽú���
	int min = A[0]; // �ּҰ� ������ �ӽ� ����
	for (int i = 0; i < 10; i++) {

		if (A[i] >= max) {
			max = A[i];
		}
		else if (A[i] < min) {
			min = A[i];

		}

	}


	cout << "Max value : " << max << endl;
	cout << "Min value : " << min << endl;

}