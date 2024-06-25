#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int Progworker = 1;
    setlocale(LC_ALL, "Rus");
    while (Progworker == 1)
    {
        double length, width;
        // Ввод длины и ширины прямоугольника
        cout << "Введите длину прямоугольника: ";
        cin >> length;
        cout << "Введите ширину прямоугольника: ";
        cin >> width;
        // Вычисление периметра
        if (length <= 0 || width <= 0)
        {
            cout << "Введите корректные данные" << endl;
        }
        else {
            double perimeter = 2 * (length + width);

            // Вычисление площади
            double area = length * width;

            // Вычисление длины диагонали
            double diagonal = sqrt(length * length + width * width);

            // Вывод результатов
            cout << "Периметр прямоугольника: " << perimeter << endl;
            cout << "Площадь прямоугольника: " << area << endl;
            cout << "Длина диагонали прямоугольника: " << diagonal << endl;
            return 0;
            Progworker = 0;
        }
    }
}