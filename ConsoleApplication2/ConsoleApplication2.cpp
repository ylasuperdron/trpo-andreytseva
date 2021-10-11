#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>


using namespace std;
int a, b, res;


int sum(int a, int b)
{
    int res = a;

    for (int i = 1; i <= b; ++i)
    {
        ++res;
    }

    return res;
}

int min(int a, int b)
{
    int res = a;

    for (int i = 1; i <= b; ++i)
    {
        --res;
    }

    return res;
}

int umg(int a, int b)
{
    int res = a * b;
    return res;
}

int prompt_menu_item()
{
    setlocale(LC_CTYPE, "rus");
    system("cls");
    cout << " Введите первое число >> ";
    cin >> a;
    cout << " Введите второе число >> ";
    cin >> b;
    int variant;
    cout << "Выберите вариант\n" << endl;
    cout << "1. +\n"
        << "2. -\n"
        << "3. *\n"
        << "5. Выход\n" << endl;
    cout << ">>> ";
    cin >> variant;
    return variant;
}

int main(int argc, char* argv[])
{
    int variant = prompt_menu_item();

    switch (variant) {
    case 1: sum(a, b);
        std::cout << "sum = " << sum(a, b) << "\n";
        break;
    case 2:
        cout << "-" << endl;
        std::cout << "sum = " << min(a, b) << "\n";
        break;
    case 3:
        cout << "-" << endl;
        std::cout << "sum = " << umg(a, b) << "\n";
        break;
    case 5:
        return 0;
        break;
    }

    printf("123");
}