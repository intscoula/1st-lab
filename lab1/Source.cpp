#include <iostream>
using namespace std;

// ������� ��� ���������� ��������� ��������
double Perimeter(double a, double b, double c, double d) {
    return a + b + c + d;
}

// ������� ��� ���������� ������� ��������
double Area(double a, double b, double h) {
    return 0.5 * (a + b) * h;
}

// ������� ��� ���������� ����� ������� ����� ��������
double MidLine(double a, double b) {
    return (a + b) / 2;
}

int main() {
    setlocale(LC_ALL, "Rus");
    double a, b, c, d, h;

    cout << "������� ����� ��������� ��������: ";
    cin >> a >> b;

    cout << "������� ����� ������� ������ ��������: ";
    cin >> c >> d;

    cout << "������� ������ ��������: ";
    cin >> h;

    cout << "�������� ��������: " << Perimeter(a, b, c, d) << endl;
    cout << "������� ��������: " << Area(a, b, h) << endl;
    cout << "����� ������� ����� ��������: " << MidLine(a, b) << endl;

    return 0;
}