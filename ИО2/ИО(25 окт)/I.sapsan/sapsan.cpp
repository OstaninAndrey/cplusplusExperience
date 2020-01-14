#include<iostream>
#include<fstream>

using namespace std;

int n=0;
int NumOfPeople=0;
int pairs=0,rows=0,alone=0;

void in()
{
	ifstream cin("sapsan.in");
	cin>>n;
}

void solution()
{
	rows=n/2;
	for(int i=1;i<=rows;i++){
		alone=rows-i;
		pairs+=2;
		if ((alone)/2==0) {
			if ((pairs)==(alone+pairs)/2) {NumOfPeople=(alone+pairs);}
			}
		else {
			alone=(alone-1);
			if ((pairs)==(alone+pairs)/2) {NumOfPeople=(alone+pairs);}
		}
		
	}
}

void out()
{
	ofstream cout("sapsan.out");
	cout<<NumOfPeople<<"\n";
}

int main()
{
	in();
	solution();
	out();
	return 0;
}
