#define _CRT_SECURE_NO_WARNINGS

#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int  n, a, m, b, c, min_price, sum;

vector <int> classroom;
vector <int> conditioner;

int main()
{
	freopen("cond.in", "r", stdin);
	freopen("cond.out", "w", stdout);

	cin >> n;
	classroom.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> classroom[i];
		classroom[i]--;
	}

	cin >> m;
	conditioner.resize(1000);

	for (int i = 0; i < 1000; i++)
	{
		conditioner[i] = -1;
	}

	for (int i = 0; i < m; i++)
	{
		int x,y;
		cin >> x;
		x--;
		cin >> y;
		if (conditioner[x] > -1)
		{
			conditioner[x] = min(conditioner[x], y);
		}
		else
		{
			conditioner[x] = y;
		}
	}

	sum = 0;

	for (int i = 0; i < n; i++)
	{
		min_price = 1000;

		for (int j = classroom[i]; j < 1000; j++)
		{
			if (conditioner[j] > -1)
			{
				min_price = min(min_price, conditioner[j]);
			}
		}

		sum += min_price;
	}

	
	cout << sum;
	

}