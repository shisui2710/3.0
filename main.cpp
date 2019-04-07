#include <iostream>
#include <math.h>

#include "child.h"
#include "Complex.h"
#include "tiles.h"
#include "Vector.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
	char act;
	cout << "Если вы хотите работать со стуктурой 'Child' введите '1'" << endl;
	cout << "Если вы хотите работать со стуктурой 'Complex' введите '2'" << endl;
	cout << "Если вы хотите работать со стуктурой 'Tiles' введите '3'" << endl;
	cout << "Если вы хотите работать со стуктурой 'Vector' введите '4'" << endl;
	cin >> act;
	switch (act)
	{
        case '1':
        setlocale(LC_ALL, "Russian");

        Child child_class_1;
		Child child_class_2;

		cout << endl << endl;
		cout << "Введите данные первого ребёнка" << endl;
		child_class_1.input();
		child_class_1.output();
		cout << endl;

		cout << "Введите данные второго ребёнка" << endl;
		child_class_2.input();
		child_class_2.output();

		break;

		case '2':
        setlocale(LC_ALL, "Russian");

        Complex complex_class_1;
		Complex complex_class_2;
		cout << endl << endl;

		cout << "Введите первое комплексное число" << endl;
		complex_class_1.input();
		cout << endl;
		complex_class_1.output();
		cout << endl;
		complex_class_1.mod();
		cout << endl << endl;
		cout << "Введите второе комплексное число" << endl;
		complex_class_2.input();
		cout << endl;
		complex_class_2.output();
		cout << endl;
		complex_class_2.mod();

		break;

		case '3':
        setlocale(LC_ALL, "Russian");

		Tiles tiles_class_1;
		Tiles tiles_class_2;

		cout << endl << endl;
		cout << "Введите данные первого типа кафеля" << endl;
		cout << "Введите марку кафеля: ";
		cin >> tiles_class_1.brand;
		cout << "Введите длину кафеля: ";
		cin >> tiles_class_1.size_h;
		cout << "Введите ширину кафеля:";
		cin >> tiles_class_1.size_w;
		cout << "Введите цену кафеля: ";
		cin >> tiles_class_1.price;
		tiles_class_1.getData();

		cout << endl << endl;
		cout << "Введите данные второго типа кафеля" << endl;
		cout << "Введите марку кафеля: ";
		cin >> tiles_class_2.brand;
		cout << "Введите длина кафеля: ";
		cin >> tiles_class_2.size_h;
		cout << "Введите ширину кафеля:";
		cin >> tiles_class_2.size_w;
		cout << "Введите цену кафеля: ";
		cin >> tiles_class_2.price;
		tiles_class_2.getData();

		break;

		case '4':
        setlocale(LC_ALL, "Russian");

        Vector vector_class_1;
		Vector vector_class_2;

		Vector vector_class_sum;
		Vector vector_class_dif;

		cout << endl << endl;

		cout << "Введите характеристики первого вектора" << endl;
		vector_class_1.input();
		vector_class_1.output();
		vector_class_1.mod();
		cout << endl << endl;
		cout << "Введите характеристики второго вектора" << endl;
		vector_class_2.input();
		vector_class_2.output();
		vector_class_2.mod();
		cout << endl;
		cout << endl;
		vector_class_sum.sum(vector_class_1, vector_class_2);
		cout << endl;
		vector_class_dif.dif(vector_class_1, vector_class_2);

        break;

        default:
        cout << "Некорректно введены данные";
        break;
	}
}
