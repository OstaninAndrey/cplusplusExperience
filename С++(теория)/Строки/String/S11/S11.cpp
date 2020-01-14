#include<iostream>
#include<string>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	string NSWE,N="North",S="South",W="West",E="East";
	int x=0,y=0,ind;
	while(cin>>NSWE)
	{
		cin>>ind;
		if (NSWE==N) y+=ind ;
		if (NSWE==S) y-=ind ;
		if (NSWE==W) x-=ind ;
		if (NSWE==E) x+=ind ;
	}
	cout<<x<<" "<<y<<"\n";
	return 0;
}
