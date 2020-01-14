#include<iostream>
#include<cstring>

using namespace std;

unsigned char ToUpper(unsigned char a)
{
	return a=(int(a)-32);
}

int main()
{
	unsigned char little;
	cin>>little;
	if ((int(little)>=97)&&(int(little)<=122)) {cout<<ToUpper(little)<<"\n";}
	else {cout<<little<<"\n";}
}
