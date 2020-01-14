#include<iostream>
#include<fstream>

using namespace std;

char letter[1005];
int ind=0;
int Num=0;

int plussing(char Letter)
{
	if ( Letter == 65 || Letter==69 || Letter == 70 || Letter == 74 || Letter==81 || Letter == 82 || Letter == 84 || Letter==88 || Letter == 89) return 2;
	if ( Letter == 72 || Letter == 73 || Letter == 75) return 3;
	else return 1;
}

void in()
{
	ifstream cin("text.in");
	while(cin>>letter[ind])
	{
		ind++;
	}
}

void solution()
{
	for(int i=0;i<ind;i++)
	{
		Num+=plussing(letter[i]);
	}
}

void out()
{
	ofstream cout("text.out");
	cout<<Num;
}


int main()
{
	in();
	solution();
	out();
	return 0;
}
