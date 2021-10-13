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
        return res;


    }
    catch (std::exception& e)
    {

        cout << e.what();
        cout << " Введите второе число снова >> ";
        cin >> b;
        return del(a, b);

    }




}

double sum(double a, double b)
{
    res = a + b;



    return res;
}

double min(double a, double b)
{
    res = a - b;


    return res;
}

double umg(double a, double b)
{
    res = a * b;
    return res;
}



int prompt_menu_item(double a, double b, char variant) {


    switch (variant) {
    case '+':
        system("cls");
        std::cout << a << " + " << b << " = " << sum(a, b) << "\n";
        break;
    case '-':
        system("cls");
        std::cout << a << " - " << b << " = " << min(a, b) << "\n";
        break;
    case '*':
        system("cls");
        std::cout << a << " * " << b << " = " << umg(a, b) << "\n";
        break;
    case '/':
        system("cls");
        std::cout << a << " / " << b << " = " << del(a, b) << "\n";

        break;


    default:puts("\n Wrong option!");

    }
    



}


int main() {
    setlocale(LC_ALL, "Rus");
    system("cls");
    double a, b, res;
    char variant;



    cout << "Введите первое число   >> ";
    cin >> a;


    cout << "Введите действие       >> ";
    cin >> variant;

    cout << "Введите второе число   >> ";
    cin >> b;


    prompt_menu_item(a, b, variant);





}