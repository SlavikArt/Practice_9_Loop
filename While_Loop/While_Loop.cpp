#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool is_hungry = true; // I'm hungry!
	string meal;
	int k = 0;
	while (is_hungry)
	{
		cout << "What do u want? ";
		cin >> meal;
		cout << "I am eating " << meal << "...\n";
		if (meal == "shaurma")
		{
			k++;
		}
		if (k == 3)
		{
			cout << "I'm full :)\n";
			is_hungry = false;
		}
	}
}