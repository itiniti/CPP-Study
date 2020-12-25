#include <iostream>
using namespace std;

//	학생들의 시험 점수를 통계 처리하는 프로그램
// 한 학급은 최대 10명까지의 학생들로 이루어진다.
// 시험은 총 3번 이루어진다.
// 배열의 1행은 학번으로 1~N까지의 수만 이용한다.
// 각 시험에 대하여 최대 점수와 최저 점수를 출력하는 프로그램을 작성하라.


int main() {
	int stu;
	cout << "학생의 수 : " ;
	cin >> stu;
	cout << endl;
	int table[10][4] = { 0 };
	for (int i = 0; i < stu; i++) { // 배열의 첫번째 열마다 학번을 부여
		table[i][0] = i + 1;
	}
	for (int i = 0; i < stu; i++) { // 배열의 첫번째 행은 제외하고 값을 입력
		for (int j = 1; j < 4; j++) {
			table[i][j] = rand() % 101;
		}
	}
	cout << "  학번   시험1   시험2  시험3 " << endl;

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

	cout << "시험 1의 합 : " << sumA << endl << "시험 2의 합 : " << sumB << endl << "시험 3의 합 : " << sumC << endl;

}