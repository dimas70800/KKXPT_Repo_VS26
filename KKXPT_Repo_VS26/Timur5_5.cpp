#include <iostream>
using namespace std;


int main() {
    system("chcp 1251");
    int number;

    cout << "Введите число: ";
    cin >> number;

    // Если число отрицательное, делаем его положительным вручную
    if (number < 0) {
        number = -number;
    }

    // Проверяем, является ли число шестизначным
    if (number >= 100000 && number <= 999999) {
        cout << "Вы ввели шестизначное число" << endl;
    }
    else {
        cout << "Это не шестизначное число" << endl;
    }

    return 0;
}