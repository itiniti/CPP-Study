#include <iostream>
using namespace std;

/*
* 0부터 9까지의 난수를 100번 생성해서 가장많이 생성된 수를 출력하는 프로그램을 작성하라
*/
int main() {
	int A[100];//난수를 저장할 배열
	int B[10] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 };// 0~9까지의 수를 카운트하여 저장할 배열
	

	for (int i = 0; i < 100; i++) {
		A[i] = rand()%10; // 0~9까지의 난수를 생성

		switch (A[i]) { // switch 문으로 B 배열에 각각의 결과값이 나온 횟수를 저장
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


	cout << "제일 많이 나온 수는 " << index << " 번 나왔습니다. " << endl;

}