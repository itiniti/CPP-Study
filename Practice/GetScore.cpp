#include <iostream>
using namespace std;

//	�л����� ���� ������ ��� ó���ϴ� ���α׷�
// �� �б��� �ִ� 10������� �л���� �̷������.
// ������ �� 3�� �̷������.
// �迭�� 1���� �й����� 1~N������ ���� �̿��Ѵ�.
// �� ���迡 ���Ͽ� �ִ� ������ ���� ������ ����ϴ� ���α׷��� �ۼ��϶�.


int main() {
	int stu;
	cout << "�л��� �� : " ;
	cin >> stu;
	cout << endl;
	int table[10][4] = { 0 };
	for (int i = 0; i < stu; i++) { // �迭�� ù��° ������ �й��� �ο�
		table[i][0] = i + 1;
	}
	for (int i = 0; i < stu; i++) { // �迭�� ù��° ���� �����ϰ� ���� �Է�
		for (int j = 1; j < 4; j++) {
			table[i][j] = rand() % 101;
		}
	}
	cout << "  �й�   ����1   ����2  ����3 " << endl;

	for (int i = 0; i < stu; i++) {
		cout << "------------------------------------" << endl;
		for (int j = 0; j < 4; j++) {
			cout << " | " << table[i][j] << " | ";
		}
		cout << endl;
	}
	int sumA=0, sumB=0, sumC=0;

	cout << "------------------------------------" << endl;
	for (int j = 0; j < stu; j++) {
		sumA += table[j][1];
		//cout << "A : " << sumA << endl;
		sumB += table[j][2];
		//	cout << "B : " << sumB << endl;
		sumC += table[j][3];
		//cout << "C : " << sumC << endl;
	}
	cout << endl;
	
	cout << "------------------------------------" << endl;

	cout << "���� 1�� �� : " << sumA << endl << "���� 2�� �� : " << sumB << endl << "���� 3�� �� : " << sumC << endl;

}