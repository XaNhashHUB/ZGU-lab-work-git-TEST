#include <iostream>
using namespace std;

// Функция сложения с проверками
int Summ(int a, int b) {

	// Проверка на переполнение сверху
	if (b > 0 && a > INT_MAX - b) {
		cerr << "Ошибка: переполнение сверху!" << endl;
		return INT_MAX;
	}

	// Проверка на переполнение снизу
	if (b < 0 && a < INT_MIN - b) {
		cerr << "Ошибка: переполнение снизу!" << endl;
		return INT_MIN;
	}

	return a + b;
}

// Дополнительно: функция вывода результата
void print_sum(int a, int b) {

	int result = Summ(a, b);
	cout << a << " + " << b << " = " << result << endl;
}

// Простой тест
int main() {

	print_sum(2, 3);        // 2 + 3 = 5
	print_sum(0, 0);        // 0 + 0 = 0
	print_sum(-5, 10);      // -5 + 10 = 5
	print_sum(INT_MAX, 1);  // Ошибка переполнения

	// Вывод в консоль "Hello, world!"
	cout << "Hello, everybody!";

	return 0;
}