#include <iostream>
#include <time.h>

using namespace std;


// 크기가 10인 배열에 난수를 저장하고 최대값과 최소값을 출력하는 프로그램을 작성

int main() {
	/* !! 1번 방법
	int max=0, min=0; // 최대 최소값 변수 선언
	int A[10]; // 배열 선언
	srand((unsigned)time(NULL)); // 시간을 참조하여 랜덤값 설정
	for (int i = 0; i < 10; i++) { // 배열에 값을 하나씩 저장
		A[i] = rand();
		cout << A[i] << endl;
	}
	int index = A[0]; // 최대값 설정용 임시변수
	int index2 = A[0]; // 최소값 설정용 임시 변수
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
	*/ //2번 방법
	int A[10]; // 배열 선언
	srand((unsigned)time(NULL)); // 시간을 참조하여 랜덤값 설정
	for (int i = 0; i < 10; i++) { // 배열에 값을 하나씩 저장
		A[i] = rand();
		cout << A[i] << endl;
	}
	int max = A[0]; // 최대값 설정용 임시변수
	int min = A[0]; // 최소값 설정용 임시 변수
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