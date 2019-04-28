#include <iostream>
using namespace std;
struct info
{
	int one;
	int five;
	int goal;
};
int main()
{
	int n;
	cin >> n;
	info arr[n];
	bool check[n];
	for (int i = 0; i < n; i++)
	{
		check[i] = false;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].one;
		cin >> arr[i].five;
		cin >> arr[i].goal;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i].goal / 5 >= arr[i].five)
		{
			if (arr[i].one >= arr[i].goal - ((arr[i].goal / 5) * 5))
			{
				cout << "true" << endl;
			}
			else
			{
				cout << "false" << endl;
			}
		}
		else
		{
			if (arr[i].one >= arr[i].goal - (arr[i].five * 5))
			{
				cout << "true" << endl;
			}
			else
			{
				cout << "false" << endl;
			}
		}
	}
}