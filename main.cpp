#include <iostream>
#include <ctime>
#include <random>
int main() {
	//Задача 1.
	const int size = 10;
	int arr[size];
	int sum{}, counter{};
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	std::cout << "Массив: \n";
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
		sum += arr[i];
		std::cout << arr[i] << ' ';
	}
	sum /= size;
	for (int i = 0; i < size; i++) {
		if (arr[i] < sum) {
			counter++;
		}
	}
	std::cout << "\nСреднее арифметическое - " << sum << '\n';
	std::cout << "Количество элементов меньше среднего арифметиеского - " << counter; 

	//Задача 2
	const int size2 = 5;
	int arr2[size2][size2];
	int arr3[size2][size2];
	std::cout << "\n\nМассивы: \n";
	for (int i = 0; i < size2; i++) {
		std::cout << '\n';
		for (int j = 0; j < size2; j++) {
			arr2[i][j] = rand() % 100;
			std::cout << arr2[i][j] << '\t';

		}
	}
	std::cout << "\n";
	for (int i = 0; i < size2; i++) {
		std::cout << '\n';
		for (int j = 0; j < size2; j++) {
			arr3[i][j] = rand() % 100;
			std::cout << arr3[i][j] << '\t';
		}
	}
	std::cout << "\n\n\nРезультаты попарного сложения: \n";
	for (int i = 0; i < size2; i++) {
		std::cout << '\n';
		for (int j = 0; j < size2; j++) {
			std::cout << arr2[i][j] + arr3[i][j] << '\t';
		}

	}

	//Задача 3
	int x;
	int arr4[6];
	std::cout << "\n\n  Введите шестизначное число -> ";
	std::cin >> x;
	if (x < 100000 || x > 999999) {
		std::cout << "\nError!!!";
		return 0;
	}
	else
		for (int i = 5; i >= 0; i--) {
			arr4[i] = x % 10;
			if (x % 10 == 0) {
				arr4[i] = 0;
			}
			x /= 10;
			}
	std::cout << "Итоговый массив: \n";
	for (int j = 0; j < 6; j++) {
		std::cout << '{' << arr4[j] << '}' << ' ';
		}




	return 0;
}