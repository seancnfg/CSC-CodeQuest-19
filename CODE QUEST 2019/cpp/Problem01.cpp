#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++)
	{
		getline(cin, s[i]);
		for (int j = 0; j < s[i].length; j++)
		{
			if (isalpha(s[i][j]))
			{
				cout << s[i][j] - 32;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}