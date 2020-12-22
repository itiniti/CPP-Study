#include <iostream>
using namespace std;

/*
MEMO:
	1.콘솔에서 그래프를 그릴경우 문자 출력이 왼쪽 상단에서부터 우측 -> 하단 순으로 진행된다.(그래프가 상하 반전)
	2.좌표를 계산하기 위해서 맨 좌측을 -15 맨 우측을 15로 가정하고 코드를 작성하였다.(단 높이는 15) (31x15)
	3.x와 y값은 결국 콘솔에서의 좌표이므로, if문에 y == ax + b 의 결과가 맞으면 그게 해다.
	4.중앙선은 .으로 표현하였다.
*/

//2차 함수 그래프 그리기
//y = ax^2 + bx + c
void Draw_Quadratic_Function_Graph(int a, int b, int c) {

}

//1차 함수 그래프 그리기
//y = ax + b
void Draw_Linear_Function_Graph(int a, int b) {
	for (int y = 7; y >= -7; y--) {								//MEMO 1에 의해 상하반전이므로 +7에서 -7로 진행
		for (int x = -15; x <= 15; x++) {
			if (y == a * x + b) printf("#");					//MEMO 3에 의해 y == a * x + b의 결과가 성립하면 #출력 아닌경우 공백
			else if (y == 0 || x == 0) printf(".");				//MEMO 4에 의해 중앙선은 .이므로 y또는 x가 0일경우 .을 출력하였다.
			else printf(" ");
		}
		cout << endl;
	}
}

//경계선 출력
void Draw_Border() { cout << "----------------------------" << endl; }

void main() {
	int a, b, c;

	//1차 함수 그래프 출력
	cout << "1차 함수 그래프 출력 [y = ax + b]" << endl;
	cout << "a값을 입력 해 주세요 : ";
	cin >> a;
	cout << "b값을 입력 해 주세요 : ";
	cin >> b;
	Draw_Border();
	Draw_Linear_Function_Graph(a, b);
	Draw_Border();

	//2차 함수 그래프 출력
	cout << "2차 함수 그래프 출력 [y = ax^2 + bx + c]" << endl;
	cout << "a값을 입력 해 주세요 : ";
	cin >> a;
	cout << "b값을 입력 해 주세요 : ";
	cin >> b;
	cout << "c값을 입력 해 주세요 : ";
	cin >> c;
	Draw_Border();
	Draw_Quadratic_Function_Graph(a, b, c);
	Draw_Border();
}