//Дан целочисленный массив A размера N (≤ 15). Переписать в новый
//целочисленный массив B все элементы с нечетными порядковыми номерами(1, 3, . . .) и вывести размер полученного массива B и его содержимое.
//Условный оператор не использовать.
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int size = rand() % 14 + 1;
	int* arrA = new int[size];
	int* arrB = new int[size];
	for (int i = 0; i < size; i++) {
		arrA[i] = rand() % 20;
		cout << arrA[i] << ";";
		
	}
	cout << endl;

	for (int i = 0; i < size; ) {
		arrB[i] = arrA[i];
		cout << arrB[i] << " ";
		i = i + 2;
	}
	 delete[] arrA;
}