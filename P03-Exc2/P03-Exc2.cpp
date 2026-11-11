#include <iostream>
using namespace std; 
int main()
{

	const int M = 50;
	int arr[M];
	int n;
	cout << "Enter a length: ";
	cin >> n;
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (i%2!=0 && arr[i]%2==0)
		{
			counter++;
			cout << i << " - " << arr[i] << endl;
		}
	}
	cout << "\nNumber of elements at odd indices and even values: " << counter << endl;
}