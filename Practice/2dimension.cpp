#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int A[3][5] = { 0 };
	srand((unsigned)time(0)); // �Է��� ���� �¾�
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++){
			A[i][j]=rand(); // �迭�� ��� �Է�
		}
	}
	

	for (int i = 0; i < 3 ; i++) { 
		cout << "--------------------------------------" << endl;
		for (int j = 0; j < 5; j++){		
		cout << A[i][j] << " | "; // Table �� ǥ���ϱ� ���� ����
		}
		cout << endl;
	}
	cout << "--------------------------------------" << endl;
	double sumA=0, sumB=0, sumC=0;
	for (int j = 0; j < 5; j++) {
		sumA = sumA + A[0][j]; // �� ���� ��
		sumB = sumB + A[1][j];
		sumC = sumC + A[2][j];
		
	}
	cout << endl << endl;
	cout << "1���� �� : " << sumA << endl << "2���� �� : " << sumB << endl << "3���� �� : " << sumC << endl << endl;
	double sumAA = 0, sumAB = 0, sumAC = 0, sumE = 0, sumD =0;
	for (int j = 0; j < 3; j++) { // <- 3��5���� �迭�ν� ���� �� 3���̴� ��ŭ j �� ���� 3�̾�߸� ��
		sumAA = sumAA + A[j][0]; // �� ���� ��
		sumAB = sumAB + A[j][1];
		sumAC = sumAC + A[j][2];
		sumD = sumD + A[j][3];
		sumE = sumE + A[j][4];

	}
	cout << "1���� �� : " << sumAA << endl << "2���� �� : " << sumAB << endl << "3���� �� : " << sumAC << endl << "4���� �� : " << sumD << endl << "5���� �� : " << sumE << endl;

}