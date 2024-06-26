#include <iostream>
using namespace std;

// Функция для вычисления периметра трапеции
double Perimetr(double a, double b, double c, double d) {
    return a + b + c + d;
}

// Функция для вычисления площади трапеции
double Area(double a, double b, double h) {
    return 0.5*(a + b)*h;
}

// Функция для вычисления длины средней линии трапеции
double MidLine(double a, double b) {
    return (a + b) / 2;
}

int main() {
    double a, b, c, d, h;

    cout << "Введите длины оснований трапеции: ";
    cin >> a >> b;

    cout << "Введите длины катетов трапеции: ";
    cin >> c >> d;

    cout << "Введите высоту трапеции: ";
    cin >> h;

    cout << "Периметр  трапеции: " << Perimetr(a, b, c, d) << endl;
    cout << "Площадь  трапеции: " << Area(a, b, h) << endl;
    cout << "Длина средней линии трапеции: " << MidLine(a, b) << endl;

    return 0;
}
  
