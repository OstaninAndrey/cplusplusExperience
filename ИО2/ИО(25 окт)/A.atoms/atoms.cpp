// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


#include<iostream>
#include<cstdlib>

using namespace std;


int n=0, mas[100000000], m = 0;
char QorP;
int a, b, c;
int ans[100000];
int k = 0;


int counting(int a, int b)
{
	int k=0;
	int answ = 0;
	for (int i = a-1; i <= b-1; i++)
	{
		if (mas[i + 1] - mas[i] == 1) k++;
	    if (k > answ) {answ = k ;}

	}
	return answ;
}

void plusing(int a, int b, int c)
{
	for (int i = a-1; i < b; i++)
	{
		mas[i] += c;
	}
}

void in()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}
	cin >> m;
}

void solution()
{
	for (int i = 0; i < m; i++)
	{
		cin >> QorP;
		if (QorP == '?') {
					cin >> a >> b;
					ans[k] = counting(a, b);
					k++;
			}
		if (QorP == '+') {
				cin >> a >> b>> c;
				plusing(a, b, c);
			}
	}
}

void out()
{
	for (int i = 0; i < k ; i++)
	{
		cout << ans[i] << "\n";
	}
}

int main()
{
	in();
	solution();
	out();
	system("pause");
}


