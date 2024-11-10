#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    double x;
    cout << "Введіть значення x: ";
    cin >> x;

    
    double numerator1 = sin(x) - pow(x, 2); 
    double denominator1 = 2 * x + 1; 
    double term1 = numerator1 / denominator1;

    double numerator2 = pow(1 + x, x); 
    double denominator2 = 1 + 3 * x; 
    double term2 = numerator2 / denominator2;

    double y = term1 + term2;

   
    cout << "Значення функції y: " << y << endl;

    return 0;
}
