#include <iostream>
using namespace std;

int min(int a,int b, int c,int d);

int main()
{
  int a=0,b=0,c=0,d=0;
  cout<<"a= ";
  cin>>a;
  cout<<endl<<"b= ";
  cin>>b;
  cout<<endl<<"c= ";
  cin>>c;
  cout<<endl<<"d= ";
  cin>>d;
  cout<<endl;
  cout<<min(a,b,c,d)<<endl;
  system("pause");
}


int min(int a,int b,int c,int d)
{
  int k=0,mas[4]={a,b,c,d};
  for (int i=0;i<4;i++)
  {
	if (mas[i]<mas[i+1]) (mas[i+1]=mas[i]);
	}
  return mas[3];
}
