#include <iostream>
using namespace std; 

int main()
{
	int arr[12];
	cout << "Enter income for each month: " << endl;
	
	for (int i = 1; i <= 12; i++)
	{
		cout << i << " - "; 
		cin >> arr[i];
	}
	cout << endl; 
	int min;
	min = arr[1];
	for (int i = 0; i < 12; i++)
	{
		if (arr[i] > 800)
		{
			cout << i << " ";
		}
	}
		
	for (int i = 0; i < 12; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "\nThe lowest income is: " << min << endl;

}