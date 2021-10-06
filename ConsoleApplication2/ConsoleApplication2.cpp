#include<iostream>
#include<math.h>
#include<locale>
#include <stdlib.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "Russian");
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
	if (b == 0)
	{
		cout << " На 0 делить нельзя! ";
		return 0;
	} 

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