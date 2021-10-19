#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <cstring>

using namespace std;
double res;
double del(double a, double b)
{


    try
    {

        if (b == 0)
            throw std::exception("Division by zero\n");


        res = a / b;



    }
    catch (std::exception& e)
    {

        cout << e.what();
        exit(3);

    }




}

double sum(double a, double b)
{
    res = a + b;



    return res;
}

double minn(double a, double b)
{
    res = a - b;


    return res;
}

double umg(double a, double b)
{
    res = a * b;
    return res;
}



void prompt_menu_item(double a, double b, char variant) {

    double res = NULL;
    switch (variant) {
    case '+':
        system("cls");
        cout << a << " + " << b << " = " << sum(a, b) << "\n";
        break;
    case '-':
        system("cls");
        cout << a << " - " << b << " = " << minn(a, b) << "\n";
        break;
    case '*':
        system("cls");
        cout << a << " * " << b << " = " << umg(a, b) << "\n";
        break;
    case '/':
        system("cls");
        cout << a << " / " << b << " = " << del(a, b) << "\n";

        break;


    default:puts("\n Wrong option!");

    }




}

double prov()
{
    if (cin.fail())
    {
        cout << "Incorrect input." << endl;
        exit(0);
        system("pause");
    }
}


int main() {
    setlocale(LC_ALL, "Rus");
    system("cls");
    double a, b, res;
    char variant;



    cout << "������� ������ �����        >> ";
    cin >> a;
    prov();

    cout << "������� ��������(+,-,*,/)   >> ";
    cin >> variant;

    cout << "������� ������ �����        >> ";
    cin >> b;
    prov();

    prompt_menu_item(a, b, variant);


    cout << "��� ������ ������� Esc\n\n";
    cout << "��� ����������� ������� Enter";
    char c;
    c = _getch();

    if (c == 27) return 0;
    if (c == 13) main();

}