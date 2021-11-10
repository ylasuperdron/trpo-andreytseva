#pragma once
#include <iostream>
#include <conio.h>
#include "operation.h"
#include "proverki.h"
using namespace std;
bool prompt_menu_item(double a, double b, char variant) {

	double res = NULL;


	switch (variant) {
	case '+':
		system("cls");
		cout << a << " + " << b << " = " << sum(a, b) << "\n"; return true;
		break;
	case '-':
		system("cls");
		cout << a << " - " << b << " = " << minn(a, b) << "\n"; return true;
		break;
	case '*':
		system("cls");
		cout << a << " * " << b << " = " << umg(a, b) << "\n"; return true;
		break;
	case '/':
		system("cls");
		if (proverkaznamenatelya(b) == 0) {
			cout << a << " / " << b << " = " << del(a, b) << "\n"; return true;
		}
		else {
			cout << "\aDivision by zero\n"; return false;
		}
		break;



	default:puts("\n\a Wrong option!"); return false;

	}




}