#include <iostream> // ���������� ���������� �����/������

using namespace std; // ���������� ������������ ���� ����������� ����������

int main()
{
    setlocale(LC_ALL, "Russian"); // ������������� ��������� 

    cout << "������, ���!" << endl; // ������� ������� �����

    int a = 648; // ��������� � �������������� ���������� ������ ����
    double x = 3.14; // ������������ ���
    double y = 1E-6; // ���������������� ������ y = 0.000001;
    char c = 'w'; // ������
    char b = 75; // ������ � ����� 75
    char t = '\t'; // ������ ��������� - ��� ���� ������
    bool Flag = true; // ���������� ����������
    Flag = 0; // ��� ���� �����, 0 - false, 1 - true

    const int max = 100; // ��������� ���������

    int h = 0xFF; // ����������������� ����� h = 15
    int g = 0b10101; // �������� ����� g = 21
    int o = 010; // ������������ ����� o = 8!

    int n = 5; // ��������� ������������� ����������
    int m = 2;
    double k = n / m; // ��������� ������������ ���������� � ����������� ��������� �������
    cout << n << " / " << m << " = " << k << endl; // ������� �� ������

    cout << 5 / 2 << endl; // ����� ���������� 2
    cout << 5 / 2.0 << endl; // ����� ���������� 2.5

    cout << 100 % 7 << endl; // ����� ���������� 2

    a = 3; // a = 3 = 0b11 
    a = a << 2; // �������� �� 2, � ���������� a = 0b1100 = 12
    cout << a << endl; // ����� ���������� 12

}
