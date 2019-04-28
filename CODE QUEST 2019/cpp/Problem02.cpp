#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << round(((40075 / 6.28) + n)*6.28) << endl;
	}
}