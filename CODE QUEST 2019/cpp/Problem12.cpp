#include <iostream>
using namespace std;
struct info
{
	int doors;
	int rounds;
	int opens;
};
int main()
{
	int n;
	cin>> n;
	info arr[n];
	float fixed[n];
	for (int i=0; i<n; i++)
	{
		cin >> arr[i].doors;
		cin >> arr[i].rounds;
		cin >> arr[i].opens;
		fixed[i]=0;
	}
	for (int i=0; i<n; i++)
	{
		int best=0;
		for (int j=0; j<arr[i].rounds; j++)
		{
			best=(((100/arr[i].doors)-j)-(arr[i].opens*j))/(100-fixed[i]);
			fixed[i]+=(((100/arr[i].doors)-j)-(arr[i].opens*j))/(100-fixed[i]);
		}
		cout << best << endl;
	}
}
