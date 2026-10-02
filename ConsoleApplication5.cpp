#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int price, m;
	cout << "Введите цену 1 товара ";
	cin >> price;
	cout  << "Введите количество ";
	cin >> m;
	int a = price * m;
	cout << "общая стоимость = " << a;
}
