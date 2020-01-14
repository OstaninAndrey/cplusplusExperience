#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const long long maxn=1e18;

long long n;
long long ans=0;

long long f(long long n)
{
      long long plusplus=-1;
      for(int i=0;i<=9;i++)
      for(int j=0;j<=9;j++)
      for(int k=0;k<=9;k++)
      for(int l=0;l<=9;l++)
      for(int u=0;u<=9;u++)
      for(int x=0;x<=9;x++)
      for(int y=0;y<=9;y++)
      for(int h=0;h<=9;h++)
      for(int n=0;n<=9;n++)
      for(int a=0;a<=9;a++)
      for(int m=0;m<=9;m++)
      for(int g=0;g<=9;g++)
      for(int t=0;t<=9;t++)
      for(int q=0;q<=9;q++)
      for(int f=0;f<=9;f++)
      for(int v=0;v<=9;v++)
      for(int p=0;p<=9;p++)
      for(int c=0;c<=9;c++)      
      {
              if ( (i*1e17+j*1e16+k*1e15+l*1e14+u*1e13+x*1e12+y*1e11+h*1e10+n*1e9+a*1e8+m*1e7+g*1e6+t*1e5+q*1e4+f*1e3+v*1e2+p*1e1+c) <= n ) plusplus++;
              else return plusplus;
      }
      return plusplus;   
}

void in()
{
//     ifstream cin("D.in");
     cin>>n;
}
 
void solution()
{
           ans=f(n);                                                                           
}

void out()
{
//     ofstream cout("D.out");
     cout<<ans<<"\n";
}

int main()
{
    in();
    solution();
    out();
    system("pause");
}
