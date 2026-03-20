#include <iostream>
int gcd(int a, int b) {
    //если второе число равно нулю, НОД найден
    if (b == 0) {
        return a;
    }
    //берём второе число и остаток от деления первого на второе
    return gcd(b, a % b);
}

int main() {
    setlocale(LC_ALL, "Russian");

    int num1, num2;

    std::cout << "Текущая кодовая страница: 1251" << std::endl;
    std::cout << "Введите 2 целых числа: ";
    std::cin >> num1 >> num2;

    // Вычисляем НОД
    int result = gcd(num1, num2);

    std::cout << "НОД этих чисел: " << result << std::endl;

    return 0;
}