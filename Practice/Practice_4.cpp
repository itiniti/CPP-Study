#include <iostream>
using namespace std;

/*
* 0���� 9������ ������ 100�� �����ؼ� ���帹�� ������ ���� ����ϴ� ���α׷��� �ۼ��϶�
*/
int main() {
	int A[100];//������ ������ �迭
	int B[10] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 };// 0~9������ ���� ī��Ʈ�Ͽ� ������ �迭
	

	for (int i = 0; i < 100; i++) {
		A[i] = rand()%10; // 0~9������ ������ ����

		switch (A[i]) { // switch ������ B �迭�� ������ ������� ���� Ƚ���� ����
		case 0:
			B[0]++;
			break;
		case 1:
			B[1]++;
			break;
		case 2:
			B[2]++;
			break;
		case 3:
			B[3]++;
			break;
		case 4:
			B[4]++;
			break;
		case 5:
			B[5]++;
			break;
		case 6:
			B[6]++;
			break;
		case 7:
			B[7]++;
			break;
		case 8:
			B[8]++;
			break;
		case 9:
			B[9]++;
			break;

		}
	}

	system("cls");
	
	int index = B[0];
	for (int i = 0; i < 10; i++) {

		if (B[i] >= index) {
			index = B[i];

		}

	}


	cout << "���� ���� ���� ���� " << index << " �� ���Խ��ϴ�. " << endl;

}