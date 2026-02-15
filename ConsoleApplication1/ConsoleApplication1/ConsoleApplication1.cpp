#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double binaryToDecimal(string binary) {
    double result = 0;
    int pointPos = binary.find('.');

    if (pointPos == -1) pointPos = binary.length();

    // Целая часть (слева от точки)
    for (int i = 0; i < pointPos; i++) {
        if (binary[i] == '1')
            result += pow(2, pointPos - 1 - i);
    }

    // Дробная часть (справа от точки)
    for (int i = pointPos + 1; i < binary.length(); i++) {
        if (binary[i] == '1')
            result += pow(2, pointPos - i);
    }

    return result;
}

int main() {
    string binaryNum;

    cout << "Введите двоичное число (можно с точкой): ";
    cin >> binaryNum;

    double decimal = binaryToDecimal(binaryNum);
    cout << "Результат: " << decimal << endl;

    return 0;
}