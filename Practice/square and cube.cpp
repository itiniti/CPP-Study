#include <iostream>
using namespace std;


// 1~10������ ������ 1��° ���� �Է��ϰ�, 2��° ������ 1��° ���� ����, 3��° ������ 1��°���� �������� ���� �Էµǰ� �϶�.
// �� ���� ����ڰ� 1~10�� ���� �Է��ϸ� �ش� ���� ������ �������� �ش��ϴ� ���� ����ϰ� �϶�.
int main() {
	int A[3][10] = { 0 };
	for (int i = 0; i < 10; i++) {
		A[0][i] = i + 1;
		A[1][i] = (A[0][i] * A[0][i]);
		A[2][i] = (A[1][i] * A[0][i]);

	}
	
	for (int j = 0; j < 3; j++) {
		cout << "----------------------------------------------------------" << endl;
		for (int i = 0; i < 10; i++) {
			cout << A[j][i] << " | ";

		}
		cout << endl;
	}
	cout << "----------------------------------------------------------" << endl << endl << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << " Type Number between 1~10 " << endl ;
	int find;
	cin >> find;
	switch (find) {
	case 1:
		cout << endl << A[0][0] << endl << A[1][0] << endl << A[2][0] << endl;
		break;
	case 2:
		cout << endl << A[0][1] << endl << A[1][1] << endl << A[2][1] << endl;
		break;
	case 3:
		cout << endl << A[0][2] << endl << A[1][2] << endl << A[2][2] << endl;
		break;
	case 4:
		cout << endl << A[0][3] << endl << A[1][3] << endl << A[2][3] << endl;
		break;
	case 5:
		cout << endl << A[0][4] << endl << A[1][4] << endl << A[2][4] << endl;
		break;
	case 6:
		cout << endl << A[0][5] << endl << A[1][5] << endl << A[2][5] << endl;
		break;
	case 7:
		cout << endl << A[0][6] << endl << A[1][6] << endl << A[2][6] << endl;
		break;
	case 8:
		cout << endl << A[0][7] << endl << A[1][7] << endl << A[2][7] << endl;
		break;
	case 9:
		cout << endl << A[0][8] << endl << A[1][8] << endl << A[2][8] << endl;
		break;
	case 10:
		cout << endl << A[0][9] << endl << A[1][9] << endl << A[2][9] << endl;
		break;
	}

}

