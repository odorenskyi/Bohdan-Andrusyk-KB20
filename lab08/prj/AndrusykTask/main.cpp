#include <iostream>
#include "ModulesAndrusyk.h"
#include <windows.h>
#include <locale.h>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");
    cout << ("|Andrusyk Bohdan, CNTU |")<< endl;
    float x, y, z;
    char a, b;
    cout << "”ведiть x: ";
    cin >> x;
    cout << "”ведiть y: ";
    cin >> y;
    cout << "”ведiть z: ";
    cin >> z;
    do{
        if(x < 0){
            cout << "Ќекоректно введене значенн€, x не може бути меншим за нуль" << endl;
            cout << "”ведiть x: ";
            cin >> x;
        }
    }while(x == 0);
    cout << "”ведiть a: ";
    cin >> a;
    cout << "”ведiть b: ";
    cin >> b;
    cout << "a + 7 = b: " << boolalpha << (a + 7 == b) << endl;
    cout << "x у дес€тковiй системi = " << dec << x << endl;
    cout << "x у шiстнадц€тковiй  системi = " << hex << x << endl;
    cout << "y у дес€тковiй системi = " << dec << y << endl;
    cout << "y у шiстнадц€тковiй  системi = " << hex << y << endl;
    cout << "z у дес€тковiй системi = " << dec << z << endl;
    cout << "z у шiстнадц€тковiй  системi = " << hex << z << endl;
    cout << "\nS = " << s_calculation(x, y, z) << endl;
    system("pause");
}
