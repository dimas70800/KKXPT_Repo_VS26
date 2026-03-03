#include <iostream>
using namespace std;

int main() {
    system("chcp 1251");
    const int SIZE = 5;  // Размер массива
    int numbers[SIZE];    // Массив для хранения чисел

    // Ввод 5 чисел
    cout << "Введите 5 целых чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Число " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // 1. Вывод всего массива
    cout << "\n1. Введенный массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Вычисление суммы
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum = sum + numbers[i];
    }

    // 2. Вывод суммы
    cout << "2. Сумма всех элементов: " << sum << endl;

    // 3. Среднее арифметическое
    // Используем double для получения дробного результата
    double average = (double)sum / SIZE;
    cout << "3. Среднее арифметическое: " << average << endl;

    // Поиск максимума и минимума
    int max = numbers[0];  // Предполагаем, что первый элемент - максимальный
    int min = numbers[0];  // Предполагаем, что первый элемент - минимальный

    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > max) {
            max = numbers[i];  // Нашли новый максимум
        }
        if (numbers[i] < min) {
            min = numbers[i];  // Нашли новый минимум
        }
    }

    // 4. Вывод максимума и минимума
    cout << "4. Максимальный элемент: " << max << endl;
    cout << "4. Минимальный элемент: " << min << endl;

    return 0;
}