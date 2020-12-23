#include <iostream>
// Dev C++ 이라 일단 제외 #include "employeestruct.h"
using namespace std;



int main(void) {
	struct Employee {
		char firstInitial;
		char lastInitial;
		int employeeNumber;
		int salary;
		void print()
		{
				cout << "Employee : " << firstInitial << lastInitial << endl << "Number : " << employeeNumber << endl << "Salary : " << salary << endl << endl;
		}
	};
	
	//구조체 예시 / 사업장에서 고용인에 대한 정보를 구조체 방식으로 표현
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	Employee anotEmployee;
	anotEmployee.firstInitial = 'E';
	anotEmployee.lastInitial = 'H';
	anotEmployee.employeeNumber = 97;
	anotEmployee.salary = 100000;

	//구조체 출력 확인
	/*
	cout << "Employee : " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number : " << anEmployee.employeeNumber << endl;
	cout << "Salary : " << anEmployee.salary << endl;
	*/
	anEmployee.print();
	anotEmployee.print();
	
	
	/*
	cout << "Employee : " << anotEmployee.firstInitial << anotEmployee.lastInitial << endl;
	cout << "Number : " << anotEmployee.employeeNumber << endl;
	cout << "Salary : " << anotEmployee.salary << endl;
	*/
	

	//구조체 변수 값 변화 체크
	/*
	anEmployee.employeeNumber += 42;
	cout << "Number : " << anEmployee.employeeNumber << endl;//구조체 안에 있는 변수 값은 변화가능
	*/



}

