#pragma once
#include <iostream>
#include <conio.h>




using namespace std;
bool proverkaznamenatelya(double b) {
	bool flag = 0;
	if (b == 0) flag = 1;
	return flag;

}
double proverka(char* x) {

	double y;



	while (sscanf_s(x, "%lf", &y) != 1) {
		cout << "\aIncorrect input.\n Enter again: ";
		cin >> x;
	}

	return y;
}