//Дан массив размера N и целые числа K и L (1 ≤ K < L ≤ N). Удалить
//из массива элементы с номерами от K до L включительно и вывести
//размер полученного массива и его содержимое.
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int n = rand() % 9 + 1;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	int k, l;
	cout << "Введите число K: ";
	cin >> k;
	cout << "Введите число L: ";
	cin >> l;
	n -= l - k + 1;
	for (int i = k - 1; i < n; i++) {
		arr[i] = arr[i + (l - k + 1)];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;
}