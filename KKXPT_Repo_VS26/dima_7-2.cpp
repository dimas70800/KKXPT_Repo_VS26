#include <iostream>
#include <ctime>
using namespace std;

int main() {
    system("chcp 1251");
    srand(time(0));

    const int ROWS = 5;
    const int COLS = 8;
    int arr[ROWS][COLS];


    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    cout << "Массив 5x8:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    int sum = 0;
    int min = arr[0][0];
    int max = arr[0][0];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];

            if (arr[i][j] < min) {
                min = arr[i][j];
            }

            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    cout << "Сумма всех элементов: " << sum << endl;
    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;
}