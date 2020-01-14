#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int N,table[1000+5][1000+5]={1000,1000};
pair <string,int> command[100+5]; 
int ans;
int x=0,y=0,tmp;
int t=0;

int move(int ind)
{
	if (command[ind].first=="N") 
	{
		for(x;x<=command[ind].second;x++)
		{
			if (( table[y][x] <= t+x )&&( table[y][x] != 0 )) return t;
			table[y][x]=t;
			t++;
		}
	}
	if (command[ind].first=="S")
	{
		for(x;x>=(x-command[ind].second);x--)
		{
			if (( table[y][x] <= t+x )&&( table[y][x] != 0 )) return t;
			table[y][x]=t;
			t++;
		}
	} 
	if (command[ind].first=="W")
	{
		for(y;y>=y-command[ind].second;y--)
		{
			if (( table[y][x] <= t+x )&&( table[y][x] != 0 )) return t;
			table[y][x]=t;
			t++;
		}
	} 
	if (command[ind].first=="E")
	{
		for(y;y<=command[ind].second;y++)
		{
			if (( table[y][x] <= t+x )&&( table[y][x] != 0 )) return t;
			table[y][x]=t;
			t++;
		}
	} 
	return ans;
}

void in()
{
	ifstream cin("mowing.in");
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>command[i].first>>command[i].second;
	}
}

void solution()
{
	for(int i=0;i<N;i++)
	{
		tmp=move(i);
		if (ans>tmp && ans!=0) ans=tmp;
	}
}

void out()
{
	ofstream cout("mowing.out");
	cout<<1000-x;

}

int main()
{
	in();
	solution();
	out();
	return 0;
}
