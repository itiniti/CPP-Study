#include <iostream>
using namespace std;

int main(){
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout << &i << endl << &j << endl << endl; // 변수에 할당된 메모리 주소 변화 체크
			
		}
	//	cout << &j << endl; 변수 해제로 불러오기 불가능 
	}
	
	struct Grade{ // 구조체 선언 
		int A;
		int B;
		int C;
		int D;
		int F;
		
		void appraisal(int a){
			if(a>=90)cout<<"잘 했네 " << endl;
			else if(a>=80)cout<<"쫌 했네 " << endl;
			else if(a>=70)cout<<"하긴 했네 " << endl;
			else if(a>=60)cout<<"안 했네 " << endl;
			else cout<<"쫌 해라 " << endl;
			 
		}
	
	};
	
	Grade score; // 구조체  유형 생성 
	score.A = 90;
	score.B = 80;
	score.C = 70;
	score.D = 60;
	score.F = 0;
	
	int myscr;
	cin >> myscr ;
	score.appraisal(myscr);
}
