#include <iostream>
using namespace std;

int ans=0;

void Input()
{
	int n=1,sum=0;
	while(n!=0)
	{
		cin>>n;
		sum+=n;
	}
	ans=sum;
}

/*
void in()
{
	
}
*/

void out()
{
	cout<<ans<<"\n";	
}


int main()
{
	Input();
	out();
	system("pause");
	return 0;
}
