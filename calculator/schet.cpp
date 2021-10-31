
#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <cstring>
#include "schet.h"
double res;
using namespace std;
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