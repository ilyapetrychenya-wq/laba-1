#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите 3 стороны треугольника ";
    cin >> a >> b >> c;
    if (c < a + b && a < c + b && b < c + a)
    {
        cout << "Треугольник существует ";
        if (a == b && b == c && c == a)
        {
            cout << "Треугольник равносторонний ";
        }
        else if (a == b || b == c || c == a)
        {
            cout << "Треугольник равнобедренный ";
        }
        else
            cout << "Треугольник разносторонний";
    }
    else cout << "Треугольника не существует";
}