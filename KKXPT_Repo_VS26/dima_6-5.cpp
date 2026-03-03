#include <iostream>
#include <vector>

using namespace std;

int main() {
	system("chcp 1251");
	vector<float> arr(7);
	cout << "Введите числа: " << endl;
	for (size_t i = 0; i < arr.size(); i++)
	{
		cin >> arr.at(i);
	}
	cout << "Отрицательные числа: " << endl;
	for (size_t i = 0; i < arr.size(); i++)
	{
		if (arr.at(i) < 0) {
			cout << arr.at(i) <<endl;
		}
	}
	cout << "Нецелые числа: " << endl;
	for (size_t i = 0; i < arr.size(); i++)
	{
		if (arr.at(i) != (int)arr.at(i)) {
			cout << arr.at(i) << endl;
		}
	}
	cout << "Только целые положительные числа: " << endl;
	for (size_t i = 0; i < arr.size(); i++)
	{
		if (arr.at(i) == (int)arr.at(i)&& arr.at(i) > 0) {
			cout << arr.at(i) << endl;
		}
	}
}