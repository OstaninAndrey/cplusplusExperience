// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
#include<fstream>
#include <string>
using namespace std;

int n, m, k;
int ind = 0;
string str[1000], str2[1000];
string backspace = "Backspace", next = "Next", copy = "Copy", paste = "Paste";
string str3;


void in()
{
	//	ifstream cin("notepad.in");
	cin >> n >> m >> k;
	for (int i = 0;i<m;i++)
	{
		cin >> str[i];
	}
}

void solution()
{
	for (int i = 0;i < m;i++)
	{
		if (str[i].length() == 1) str2[ind] += str[i];
		if (str[i] == "Next") {
			if (ind == n) ind = 0;
			else ind++;
		}
		if (str[i] == "Backspace")  str2[ind].erase(str2[ind].length()-1);
		if (str[i] == "Copy") str3 = str2[ind];
		if (str[i] == "Paste") str2[ind] += str3;
	}
}

void out()
{
	//	ofstream cout("notepad.out");
	cout << str2[ind] << "\n";
}

int main()
{
	in();
	solution();
	out();
	system("pause");
}