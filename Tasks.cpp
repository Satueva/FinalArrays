#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>



int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Задача 1.
	std::cout << "Изначальный массив:\n";
	const int size1 = 10;
	int arr1[size1]{};
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 10 + 1;
		std::cout << arr1[i] << ', ';
	}
	std::cout << std::endl; // осуществлаяет перенос строки текста, 
	                        // а также сброс данных из буфера потока вывода

	std::cout << "Введиде количество элементов для сортировки -> ";
	std::cin >> n;

	// Быстрая сортировка
	//std::sort(arr1, arr1 + n);


	// Пузырьковая сортировка
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);




	std::cout << "Итоговый массив\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";



	// Задача 2. Температура за январь
	std::cout << "Темперетура за все дни января:\n";
	const int size2 = 31;
	double arr2[size2]{};
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-5 - (-30)) + (-30);
		arr2[i] += rand() % 11 / 10.0; // Добавляем дробное значение 0,0 до 1.0 включительно С шагом в 0,01
		std::cout << arr2[i] << ", ";
	}
	std::cout << "\b\b \n";

	std::cout << "Введите верхнюю границу температуры для проверки -> ";
	double max_temp, sum = 0.0;
	int counter = 0;
	std::cin >> max_temp;

	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < max_temp)
			counter++;
	}

	std::cout << "Средняя температура за месяц: " << sum / size2 << std::endl;
	std::cout << "Кличество днейб кргда температура опускалась ниже " << max_temp << " градусов " << counter << "\n\n";



	

















	return 0;
}