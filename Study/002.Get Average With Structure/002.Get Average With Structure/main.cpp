#include <iostream>
using namespace std;

typedef struct student {
	int score;
};

//student 배열의 최소값
int GetMinScore(student* students, int n) {
	int Index = 0;
	for (int i = 0; i < n; i++)
	{
		if (students[i].score < students[Index].score) {
			Index = i;
		}
	}
	return students[Index].score;
}

//student 배열의 최대값
int GetMaxScore(student* students, int n) {
	int Index = 0;
	for (int i = 0; i < n; i++)
	{
		if (students[i].score > students[Index].score) {
			Index = i;
		}
	}
	return students[Index].score;
}

//students 배열의 평균 구하기
int GetAverage(student* students, int n) {
	int sum=0;
	for (int i=0;i<n;i++)
		sum+=students[i].score;
	
	int average=sum/n;
	return average;
}

int main(void) {
	//총 학생 수 입력 받기
	int nStudentsCount = 0;
	cout << "총 학생 수를 입력해 주세요 : ";
	cin >> nStudentsCount;

	//총 학생 수만큼 배열 동적 할당
	student* Students = new student[nStudentsCount]; 

	//학생 수 만큼 자료 입력 받기.
	for (int i = 0; i < nStudentsCount; i++)
	{
		
		cout << i + 1 << "번째 학생의 점수 : ";
		cin >> Students[i].score;
	}
	cout << "------------------------------------------------------------"<<endl;
	cout << "최저 점수 : " << GetMinScore(Students, nStudentsCount) << endl << "최대 점수 : " << GetMaxScore(Students, nStudentsCount) << endl << "평균 점수 : " << GetAverage(Students, nStudentsCount) << endl;
}
