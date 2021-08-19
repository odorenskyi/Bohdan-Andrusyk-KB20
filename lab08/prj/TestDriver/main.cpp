#include <iostream>
#include "ModulesAndrusyk.h"
#include <windows.h>
#include <locale.h>
#include <stdio.h>

using namespace std;

int main()
{
    float x[] = {1, 4, 2, 1, 321, 5, 1.5, 1000, 993, 4};
    float y[] = {2, 6, 3, 0, 4, -5, 0.443, 0, -7, 2};
    float z[] = {3, 2, 5, 1, 0, 3, 132, 7, 0, -5};
    float res[] = {4.36338,20732.1,222.631,1,19.1897,759376,445.798,31.6228,29.2837,9997.36};
    for(int i = 0; i < 10; i++){
            if(s_calculation(x[i], y[i], z[i]) == res[i]){
            cout << "Test case¹" << i+1 << " passed  " <<  endl;
        }
        else{
            cout << "Test case¹" << i+1 << " failed  " << s_calculation(x[i], y[i], z[i]) << endl;
        }
    }
    getchar();
    return 0;
}
