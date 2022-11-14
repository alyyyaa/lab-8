//Дан массив размера N и целые числа K и L (1 < K ≤ L ≤ N). Найти
//сумму всех элементов массива, кроме элементов с номерами от K до L
//включительно.
#include <iostream>
using namespace std;
int main()
{
	int arr[7]{ 2,5,6,8,12,4,13 };
	int k, l, n;
	cout << "Введите размер массива: ";
	cin >> n;
	cout << "Введите число K: ";
	cin >> k;
	cout << "Введите число L: ";
	cin >> l;
	for (int i = k; i <= l; i++) {
		arr[i] = 0;
	}
	int summ = 0;
	for (int i = 0; i < size(arr); i++) {
		summ += arr[i];
	}
	cout << summ;
}