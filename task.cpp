
#include <iostream>
#include <cmath>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    double firstNumber, secondNumber;
    double arithmeticMean, geometricMean;
    cout << "Уведiть перше число: ";
    cin >> firstNumber;
    cout << "Уведiть друге число: ";
    cin >> secondNumber;
    arithmeticMean = (pow(firstNumber, 3) + pow(secondNumber, 3)) / 2;
    geometricMean = sqrt(abs(firstNumber) * abs(secondNumber));
    cout << "Середнє арифметичне кубів цих чисел = " << arithmeticMean << endl;
    cout << "Середнє геометричне модулів цих чисел = " << geometricMean;
}
