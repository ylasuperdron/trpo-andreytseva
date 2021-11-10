#include <iostream>
#include <conio.h>
#include "schet.h"



using namespace std;


	int main() {
		setlocale(LC_ALL, "Rus");
		system("cls");
		double a, b, res;
		char variant;

		char A[1000], B[1000];


		cout << "Введите первое число: » ";
		cin >> A;

		a = proverka(A);


		cout<< "Введите операцию(+,-,*,/) » ";
		cin >> variant;


		cout << "Введите второе число: » ";
		cin >> B;
		b = proverka(B);

		prompt_menu_item(a, b, variant);


		cout << "Для выхода нажмите Esc\n\n";
		cout<< "Чтобы продолжить нажмите Enter";
		char c;
		c = _getch();



		if (c == 27) return 0;
		if (c != 27) main();

	} 