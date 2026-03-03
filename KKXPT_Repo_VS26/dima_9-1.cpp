#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 1251");

    int size;

    cout << "Введите размер массива: ";
    cin >> size;

    vector<float> arr(size);

    cout << "Введите " << size << " чисел:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr.at(i);
    }

    
    float sum = 0;
    float min = arr[0];
    float max = arr[0];

    for (int i = 0; i < size; i++) {
        sum = sum + arr.at(i);

        if (arr.at(i) < min) {
            min = arr.at(i);
        }

        if (arr.at(i) > max) {
            max = arr.at(i);
        }
    }

    float average = sum / size;

    cout << "Сумма элементов: " << sum << endl;
    cout << "Среднее арифметическое: " << average << endl;
    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;
}