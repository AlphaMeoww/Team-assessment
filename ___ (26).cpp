#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

char a[500][500];
int up, down, left, right;
int num=0;

int main()
{
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			up = i - 1, down = i + 1, left = j - 1, right = j + 1;
			if ((up >= 0 && up < x) && (down >= 0 && down < x) && (left >= 0 && left < y) && (right >= 0 && right < y))
			{
				if (a[up][j] == *&&a[down][j]==*&&a[i][left]==*&&a[i][right]==*)
				{
					num++;
				}
			}
		}
	}
	cout << num;
}