#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;
 
int main()
{
	// in
	string word;
	// out
	int ansI=0;
	string ansS;
	// temp
	int temp=0;
	
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	
	while (cin>>word)
	{	
		if (word.length()>ansI) {
		ansS=word;
		ansI=word.length();
		}
	}
	cout<<ansS<<"\n"<<ansI<<"\n";
	return 0;
}
