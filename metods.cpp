#include <iostream>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"
#include <math.h>

using namespace std;

void Child::input()
{
    setlocale(LC_ALL, "Russian");
	cout << "Введите имя ребёнка: ";
	cin >> name;
	cout << "Введите фамилию ребёнка: ";
	cin >> surname;
	cout << "Введите возраст ребёнка: ";
	cin >> age;
}

void Child::output()
{
    setlocale(LC_ALL, "Russian");
	cout << "Имя: " << name << endl;
	cout << "Фамилия: " << surname << endl;
	cout << "Возраст: " << age << endl;
}

void Tiles::getData()
{
    setlocale(LC_ALL, "Russian");
	cout << "Бренд кафеля: " << brand << endl;
	cout << "Длина кафеля: " << size_h << endl;
	cout << "Ширина кафеля: " << size_w << endl;
	cout << "Цена кафеля: " << price << endl;
}

void Complex::input()
{
    setlocale(LC_ALL, "Russian");
	cout << "Введите Х комплексного числа: ";
	cin >> x;
	cout << "Введите У комплексного числа: ";
	cin >> y;
}

void Complex::mod()
{
    setlocale(LC_ALL, "Russian");
	float a = sqrt(x * x + y * y);
	cout << "Модуль комплексного числа: " << a;
}

void Complex::output()
{
    setlocale(LC_ALL, "Russian");
	cout << "Комплексное число: " << x << " " << y << "i" << endl;
	cout << "X комплексного числа: " << x << endl;
	cout << "У комплексного числа: " << y << endl;
}

void Vector::input()
{
    setlocale(LC_ALL, "Russian");
	cout << "Введите координату Х: ";
	cin >> x;
	cout << "Введите координату У: ";
	cin >> y;
}

void Vector::output()
{
    setlocale(LC_ALL, "Russian");
	cout << "Координата Х: " << x << endl;
	cout << "Координата У: " << y << endl;
}

void Vector::mod()
{
    setlocale(LC_ALL, "Russian");
	float a = sqrt(x * x + y * y);
	cout << "Модуль вектора = " << a;
}

void Vector::sum(Vector v1, Vector v2)
{
    setlocale(LC_ALL, "Russian");
	x = v1.x + v2.x;
	y = v1.y + v2.y;
	cout << "Сумма векторов: " << endl;
	output();
}

void Vector::dif(Vector v1, Vector v2)
{
    setlocale(LC_ALL, "Russian");
	x = v1.x - v2.x;
	y = v1.y - v2.y;
	cout << "Разность векторов: " << endl;
	output();
}
