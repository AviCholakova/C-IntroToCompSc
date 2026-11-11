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
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Sum = " << sum;

	cout << endl;
	double avr = sum / n;
	cout << "Average = " << avr;
	cout << endl;


	int min, max;
	min = max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min )
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Min = " << min << endl;
	cout << "Max = " << max << endl; 
}
