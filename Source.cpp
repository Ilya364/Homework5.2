#include <iostream>
using namespace std;

void SortArr(int* arr)
{
	for (int i = 0; i < 12; i+=2)
	{
		int temp = arr[i];
		arr[i] = arr[i + 1];
		arr[i+1] = temp;
	}
}




int main()
{

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int* arr = new int[12];

	for (int i = 0; i < 12; i++)
	{
		arr[i] = rand() % 20;
	}
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << arr[i] << " ";
	}
	cout <<endl<<"Итоговый массив:" << endl;


	SortArr(arr);

	for (int i = 0; i < 12; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[]arr;
}