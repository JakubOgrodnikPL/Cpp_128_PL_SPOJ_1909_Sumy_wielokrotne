#include <iostream>
using namespace std;

int main()
{
	long long num;
	long long suma_kol = 0;
	long long suma_wers = 0;
	while (cin >> num)
	{

		if (num == 0)
		{
			cout << suma_wers << endl;
			suma_kol += suma_wers;
			suma_wers = 0;
		}
		else
		{
			suma_wers += num;
		}
	}
	cout << suma_kol << endl;
	return 0;
}
