#include <iostream>
#include <cstdlib>  // для rand() и srand()
#include <ctime>    // для time()
using namespace std;

int main() {
    system("chcp 1251");
    int size;
    int choice;

    // Ввод количества элементов
    cout << "Введите количество элементов: ";
    cin >> size;

    // Создаем динамический массив
    int* numbers = new int[size];

    // Выбор способа заполнения
    cout << "Выберите способ заполнения:" << endl;
    cout << "1. Ввести числа с клавиатуры" << endl;
    cout << "2. Заполнить случайными числами" << endl;
    cout << "Ваш выбор: ";
    cin >> choice;

    if (choice == 1) {
        // Ручной ввод
        cout << "Введите " << size << " целых чисел:" << endl;
        for (int i = 0; i < size; i++) {
            cout << "Число " << i + 1 << ": ";
            cin >> numbers[i];
        }
    }
    else {
        // Заполнение случайными числами
        srand(time(0));  // Инициализация генератора случайных чисел
        cout << "Сгенерированные числа:" << endl;
        for (int i = 0; i < size; i++) {
            numbers[i] = rand() % 201 - 100;  // Числа от -100 до 100
            cout << numbers[i] << " ";
        }
        cout << endl;
    }

    // 1. Вывод всего массива (если не выводили при генерации)
    if (choice == 1) {
        cout << "\n1. Введенный массив: ";
        for (int i = 0; i < size; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "\n1. Сгенерированный массив (уже показан выше)" << endl;
    }

    // Вычисление суммы
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + numbers[i];
    }

    // 2. Вывод суммы
    cout << "2. Сумма всех элементов: " << sum << endl;

    // 3. Среднее арифметическое
    double average = (double)sum / size;
    cout << "3. Среднее арифметическое: " << average << endl;

    // Поиск максимума и минимума
    int max = numbers[0];
    int min = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // 4. Вывод максимума и минимума
    cout << "4. Максимальный элемент: " << max << endl;
    cout << "4. Минимальный элемент: " << min << endl;

    // Освобождаем память
    delete[] numbers;

    return 0;
}