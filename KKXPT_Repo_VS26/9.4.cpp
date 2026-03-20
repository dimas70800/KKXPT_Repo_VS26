#include <iostream>
#include <algorithm>

int main() {
    std::cout << "Введите количество элементов массива: ";
    int n;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Некорректный размер.\n";
        return 0;
    }

    int* a = new int[n];

    std::cout << "Введите " << n << " чисел:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::cout << "Как отсортировать массив?\n";
    std::cout << "1 - по возрастанию\n";
    std::cout << "2 - по убыванию\n";
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::sort(a, a + n); // по возрастанию
    }
    else if (choice == 2) {
        std::sort(a, a + n, std::greater<int>()); // по убыванию
    }
    else {
        std::cout << "Некорректный выбор.\n";
        delete[] a;
        return 0;
    }

    std::cout << "Отсортированный массив:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';

    delete[] a;
    return 0;
}
