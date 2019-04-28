#include <iostream>
using namespace std;
struct info
{
	int x;
	int y;
};
int main()
{
	int n;
	cin >> n;
	int grid[n][20][20];
	info viewpoint[n];
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<20; j++)
		{
			for (int k=0; k<20; k++)
			{
				grid[i][j][k]=10;
			}
		}
	}
	for (int i=0; i<n; i++)
	{
		cin >> viewpoint[i].x;
		cin >> viewpoint[i].y;
	}
	for (int i=0; i<n; i++)
	{
		grid[i][viewpoint[i].x][viewpoint[i].y]=100;
		for (int j=-1; j<2; j++)
		{
			for (int k=-1; k<2; k++)
			{
				if (viewpoint[i].x+j>=0 && viewpoint[i].x+j<20 && viewpoint[i].y+k>=0 && viewpoint[i].y+k<20 && grid[i][viewpoint[i].x+j][viewpoint[i].y+k]==10)
				{
					grid[i][viewpoint[i].x+j][viewpoint[i].y+k]=50;
				}
			}
		}
		for (int j=-2; j<3; j++)
				{
					for (int k=-2; k<3; k++)
					{
						if (viewpoint[i].x+j>=0 && viewpoint[i].x+j<20 && viewpoint[i].y+k>=0 && viewpoint[i].y+k<20 && grid[i][viewpoint[i].x+j][viewpoint[i].y+k]==10)
						{
							grid[i][viewpoint[i].x+j][viewpoint[i].y+k]=25;
						}
					}
				}
		for (int j=0; j<20; j++)
		{
			for (int k=0; k<19; k++)
			{
				cout << grid[i][j][k] << " ";
			}
			cout << grid[i][j][19];
			cout << endl;
		}
	}
}
