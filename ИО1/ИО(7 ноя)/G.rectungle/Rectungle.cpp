
#include<iostream>
#include<fstream>
 
using namespace std;
 
int n , m , p;
int Condition1 , Condition2;
 
void in()
{
//  ifstream cin("rectungle.in");
    cin>>n>>m>>p;
}
  
void solution()
{
    Condition1 = ( p - 4*m - 2*n );  
	Condition2 = ( p - 4*n - 2*m );  
}
  
void out()
{
//  ofstream cout("rectungle.out");
    if ( ( Condition1 % 2 == 0 ) && ( Condition1 > 0 ) ) cout<<"YES";
	if ( ( Condition2 % 2 == 0 ) && ( Condition2 > 0 ) )  cout<<"YES";
	if ( ( 6*n + 2*m == p ) && ( m >= 3 ) ) cout<<"YES";
	if ( ( 6*m + 2*n == p ) && (n >= 3 ) )   cout<<"YES";
    else cout<<"NO\n";
	
}
 
int main()
{
    in();
    solution();
    out();
    return 0;
}
