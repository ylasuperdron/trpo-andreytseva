#include<iostream>
#include<math.h>
#include<locale>
#include <stdlib.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Russian");
nn:
	float a;
	float b;
	float c;
	char d;
	cout << " Введите первое число >> ";
	cin >> a;

	cout << " Введите действие >> ";
	cin >> d;

	cout << " Введите второе число >> ";
	cin >> b;

	switch (d)
	{
	case '+':
		c = a + b;
		break;
	case '-':
		c = a - b;
		break;
	case '*':
		c = a * b;
		break;
	case '/':
		c = a / b;
		break;
	default:
		cout << " Неверное действие ";
		break;

	}
	cout << " Ответ >> " << c << endl;

	
	

	return 0;

	
		 
}