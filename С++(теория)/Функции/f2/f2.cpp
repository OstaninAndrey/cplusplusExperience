#include <iostream>
using namespace std;
int a=0;

int SumOfDigits(int n)
{
    int sum=0,j=0,l=0;
   while (n>=1)
   {
         l=n%10;
         n=n/10;
         sum=sum+l;
         }
         return sum;
}


void in()
{
  cout<<"a= ";
  cin>>a;    
    }
    
/*void solution ()
{
   
}*/

void out()
{
    cout<<SumOfDigits(a);
}

int main()
{
  in();
 // solution();
  out();
  system ("pause");
  return 0;
}
