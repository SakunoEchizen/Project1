#include <stdio.h>
#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;

int main()
{

	cout << 'M' << endl;
	cout.put('M');

	cout << "===============" << endl;

	cout << '$' << endl;
	cout.put('$');
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "===============" << endl;
	cout << "\aOperation \"HyperHype\" id now avtived!\n";
	cout << "Enter your agent code:___\b\b";
	long code;
	cin >> code;
	cout << "\aYour entered is:" << code << endl;
	wchar_t bob = L'P';
	wcout << L"tall" << endl;//��� tall
	cout << bob << endl;//��� 80	
	wcout << bob << endl;//��� P
	cout << sizeof(bob) << endl;//��С 2

}