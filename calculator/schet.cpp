
#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <cstring>
#include "schet.h"
double res;

using namespace std;

 bool proverkaznamenatelya( double b) {
    bool flag=0;
    if (b == 0) flag = 1;
        return flag;

}
double proverka(char* x) {

    double y;

    

    while (sscanf_s(x, "%lf", &y) != 1) {
        cout << "\aIncorrect input.\n ¬ведите число заново: ";
        cin >> x;
    }
    
    return y;
}
double del(double a, double b)
{
    
    res = a / b;
    return res;
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



bool prompt_menu_item(double a, double b, char variant) {

    double res = NULL;
    char m;
    
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
        if (proverkaznamenatelya(b) == 0)    cout << a << " / " << b << " = " << del(a, b) << "\n";
        else cout << "\aDivision by zero\n";      
        break;


    default:puts("\n\a Wrong option!"); 

    }



    return 0;
}

