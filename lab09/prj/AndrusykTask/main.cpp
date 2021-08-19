#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <locale.h>
#include <bitset>
#include <math.h>
#include "ModulesAndrusyk.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << ("|Andrusyk Bohdan, CNTU|")<<endl;
    char checkbox;

    while (true){

        cout << "Введiть 'k' для виклику s_calculation."<< endl
        << "Введiть 'h' для виклику функцiї задачi 9.1."<< endl
        << "Введiть 'g' для виклику функцiї задачi 9.2."<< endl
        << "Введiть 'f' для виклику функцiї задачi 9.3."<< endl
        << "Введiть 'd', 'D' або 'c' для виходу з програми."<< endl
        << "Введiть ключ:";
        cin >> checkbox;
        if (checkbox == 'k')
            {
                float a = 0, b = 0, c = 0;
                cout << "x: ";
                cin >> a;

                cout << "y: ";
                cin >> b;

                cout << "z: ";
                cin >> c;

                cout << "Результат: " << s_calculation(a, b, c) << endl;
            }
            if(checkbox == 'h')
            {
                deposit();
            }
            if(checkbox == 'g')
            {
                weather();
            }
            if(checkbox == 'f')
            {
                binaryNum();
            }
            if(checkbox == 'c' || checkbox == 'D' || checkbox == 'd')
            {
                break;
            }
            else{
                Beep(500,500);
            }
        }
        return 0;
    }

