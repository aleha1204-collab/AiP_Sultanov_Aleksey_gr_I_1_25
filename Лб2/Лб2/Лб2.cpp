#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Введи число: ";
    double x;
    cin >> x;
    float a = x;
    double b = x;
    double raz = b - a;
    cout << fixed << setprecision(15);
    cout << "\nFloat:  " << a << endl;
    cout << "Double: " << b << endl;
    cout << "Разница: " << raz << endl;
    system("pause");
    return 0;
}