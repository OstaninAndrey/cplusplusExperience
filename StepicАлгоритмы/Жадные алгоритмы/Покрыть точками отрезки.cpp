// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <algorithm>

using namespace std;

int n;
pair<long long,long long> segment[105];
long long ans[100], j = 0;



void in()
{
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> segment[i].second;   // начало отрезка
		cin >> segment[i].first;	// конец отрезка
	}
}

void solution()
{
	sort( segment , segment + n);		// сортируем по концам отрезков

	ans[0] = segment[0].first;
	for (int i = 0;i < n;i++)			// ищем количество точек и сами точки
	{
		
		if ((ans[j]>segment[i + 1].first) || (ans[j]<segment[i + 1].second))
		{
			j++;
			ans[j] = segment[i+1].first;
			
		}
	}						
}

void out()
{
	cout << j << "\n";
	for (int i = 0;i < j;i++)
	{
		cout << ans[i] << " ";
	}
}

int main()
{
	in();
	solution();
	out();
	return 0;
}