#include <iostream>

constexpr int c_size = 8;

void QuickSort(int* arr, int left, int right)
{

	int pivot = arr[(left + right)/2];
	int i = left, j = right;
	int k;
	int f;

	while(i <= j)
	{
		while (arr[i] < pivot) i++;
		while (arr[j] > pivot) j--;
		if (i <= j) {

			k = arr[i];
			f = arr[j];

			std::swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}


	if(j>left) QuickSort(arr, left, j);
	if(i<right) QuickSort(arr, i, right);
}


int main(int argc, char* argv[])
{

	int arr[c_size];
	std::cout << "Quick sort for numbers" << std::endl
		<< "Enter numbers that must be sorted" << std::endl;

	for (int i = 0; i < c_size; i++)
		std::cin >> arr[i];

	QuickSort(arr, 0, c_size-1);

	for (int i = 0; i < c_size; i++)
		std::cout << arr[i] << " ";

	return 0;
}