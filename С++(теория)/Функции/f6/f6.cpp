#include <iostream>
using namespace std;

int a=0;

int reverse(int n)
{
	int k=n,rev=0,i=0,x=1;
	
	while (k>0)
	{
		k=k/10;
		i++;
		x=x*10;
		}
			
	int y=0;

	for (int j=0;j<i;j++)
	{
		x=x/10;
		y=(n%10);
		rev+=y*x;
		n=n/10;
		
	}
	return rev;
}

void in()
{
	cout<<"Enter a: ";
	cin>>a;
}

void out()
{
	cout<<reverse(a)<<endl;
}

int main()
{
	in();
	out();
	system ("pause");
	return 0;
}
