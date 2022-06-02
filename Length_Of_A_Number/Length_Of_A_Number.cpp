#include <iostream>

using namespace std;

int main()
{
	int num;
	int k = 0;

	cout << "Enter a number: ";
	cin >> num;

	while (num != 0)
	{
		num /= 10;
		k++;
	}
	cout << "Length: " << k;

	/*
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << "\n";
		}
	}
	*/

	/*
	int a, b, sum = 0;

	cin >> a >> b;
	if (a < b)
	{
		for (; a <= b; a++)
		{
			sum += a;
		}
	}
	else
	{
		cout << "Error\n";
	}
	cout << "Sum: " << sum << "\n";
	*/
}