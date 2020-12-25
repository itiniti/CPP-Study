#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int A[3][5] = { 0 };
	srand((unsigned)time(0)); // 입력할 난수 셋업
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++){
			A[i][j]=rand(); // 배열에 요소 입력
		}
	}
	

	for (int i = 0; i < 3 ; i++) { 
		cout << "--------------------------------------" << endl;
		for (int j = 0; j < 5; j++){		
		cout << A[i][j] << " | "; // Table 로 표현하기 위해 삽입
		}
		cout << endl;
	}
	cout << "--------------------------------------" << endl;
	double sumA=0, sumB=0, sumC=0;
	for (int j = 0; j < 5; j++) {
		sumA = sumA + A[0][j]; // 각 열의 합
		sumB = sumB + A[1][j];
		sumC = sumC + A[2][j];
		
	}
	cout << endl << endl;
	cout << "1열의 합 : " << sumA << endl << "2열의 합 : " << sumB << endl << "3열의 합 : " << sumC << endl << endl;
	double sumAA = 0, sumAB = 0, sumAC = 0, sumE = 0, sumD =0;
	for (int j = 0; j < 3; j++) { // <- 3행5열의 배열로써 행이 총 3개이니 만큼 j 의 값은 3이어야만 함
		sumAA = sumAA + A[j][0]; // 각 행의 합
		sumAB = sumAB + A[j][1];
		sumAC = sumAC + A[j][2];
		sumD = sumD + A[j][3];
		sumE = sumE + A[j][4];

	}
	cout << "1행의 합 : " << sumAA << endl << "2행의 합 : " << sumAB << endl << "3행의 합 : " << sumAC << endl << "4행의 합 : " << sumD << endl << "5행의 합 : " << sumE << endl;

}