#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <cstring>
#include "operation.h"
#include "proverki.h"
#include "menu.h"

double res;

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	system("cls");
	double a, b, res;
	char variant;

	char A[1000], B[1000];


	cout << "������� ������ �����: � ";
	cin >> A;

	a = proverka(A);


	cout << "������� ��������(+,-,*,/) � ";
	cin >> variant;


	cout << "������� ������ �����: � ";
	cin >> B;
	b = proverka(B);

	prompt_menu_item(a, b, variant);


	cout << "��� ������ ������� Esc\n\n";
	cout << "����� ���������� ������� Enter";
	char c;
	c = _getch();



	if (c == 27) return 0;
	if (c != 27) main();

}