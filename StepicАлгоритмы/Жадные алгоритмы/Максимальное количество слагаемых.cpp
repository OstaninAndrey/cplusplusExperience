// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<iostream>


using namespace std;

int n, k;
int A[100000], B[100000];
int el;


int FindInd(int el)
{
	int fi = 1, la = n, m = 0;
	while (fi < la)
	{
		m = (fi + la) / 2;
		if (A[m] == el) return m;
		if (A[m] < el) la = m - 1;
		if (A[m] > el) fi = m + 1;
	}
	return -1;
}

void in()
{
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> A[i];
	}
	cin >> k;
	for (int i = 0;i < k;i++)
	{
		cin >> B[i];
	}

}

void solution()
{
	for (int i = 0;i < k;i++)
	{
		B[i] = FindInd(B[i]);
	}

}

void out()
{
	cout << n;
	for (int i = 0;i < n;i++)
	{
		cout << A[i];
	}
	cout << k;
	for (int i = 0;i < k;i++)
	{
		cout << B[i];
	}
}

int main()
{
	
	in();
//	solution();
	out();
	system("pause");
}