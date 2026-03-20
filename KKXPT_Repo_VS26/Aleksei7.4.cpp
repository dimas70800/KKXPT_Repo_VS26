#include <iostream>
#include <ctime> 

int main() {
    system("chcp 1251");
    const int N = 7;
    int a[N][N];
    srand(time(nullptr));

    // Заполнение массива случайными числами, например от 0 до 99
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            a[i][j] = rand() % 100;
        }
    }

    // Вывод исходного массива
    std::cout << "Исходный массив:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << a[i][j] << '\t';
        }
        std::cout << '\n';
    }

    // Поиск min и max
    int mn = a[0][0];
    int mx = a[0][0];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (a[i][j] < mn) mn = a[i][j];
            if (a[i][j] > mx) mx = a[i][j];
        }
    }

    std::cout << "\nМинимальный элемент: " << mn << '\n';
    std::cout << "Максимальный элемент: " << mx << '\n';

    // Ввод координат элемента
    int x, y;
    std::cout << "\nВведите координаты элемента (строка и столбец от 0 до 6): ";
    std::cin >> x >> y;

    // Простая проверка корректности координат
    if (x < 0 || x >= N || y < 0 || y >= N) {
        std::cout << "Ошибка: координаты вне диапазона.\n";
        return 0;
    }

    // Умножение выбранного элемента на 2
    a[x][y] *= 2;

    // Вывод массива после изменения
    std::cout << "\nМассив после умножения элемента [" << x << "][" << y << "] на 2:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << a[i][j] << '\t';
        }
        std::cout << '\n';
    }

    return 0;
}
