#include <iostream>
using namespace std;
int main()
{
	const int M = 50;
	int arr[M];
	int n;
	cout << "Enter a length: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 10 && arr[i] % 3 == 0)
		{
			counter++;
			cout << arr[i] << " ";
		}
	}
	cout << "\nNumber of elements greater than 10 and divisible by 3: " << counter << endl;
}
