#include <iostream>
#include <conio.h>
#include "schet.h"


using namespace std;



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