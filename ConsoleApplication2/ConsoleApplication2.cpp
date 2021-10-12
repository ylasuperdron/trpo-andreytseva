#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>


using namespace std;
double a, b, res;

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
        << "4. /\n"
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
        std::cout << "razonst' = " << min(a, b) << "\n";
        break;
    case 3:
        cout << "-" << endl;
        std::cout << "proizvedenie = " << umg(a, b) << "\n";
        break;
    case 4:
        std::cout << "chastnoe = " << del(a, b) << "\n";
        
        break;
    case 5:
        return 0;
        break;
    default:puts("\n Wrong option!");
    }

    return 0;
}
