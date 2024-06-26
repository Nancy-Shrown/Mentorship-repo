/*How much maximum swap are needed to sort array of length 6.
n=6
number of swaps=n-1=6-1=5

Push zeroes to end while maintaining the
relative order of other elements.*/
#include <iostream>
using namespace std;
// function to move all zeroes at the end of array
void moveZerosToEnd(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] != 0)
			arr[count++] = arr[i];
	for (int i = count; i < n; i++)
		arr[i] = 0;
}
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
int main()
{
	int arr[] = { 0, 2, 4, 0, 1, 0, 9, 8, 0, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Original array: ";
	printArray(arr, n);

	moveZerosToEnd(arr, n);

	cout << "\nModified array: ";
	printArray(arr, n);
	return 0;
}

