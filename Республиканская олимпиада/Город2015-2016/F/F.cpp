#include<iostream>
#include<fstream>

using namespace std;

long long x;
int ind=0;
int arr[1000000];

int simpleOrNot(int a)
{
    int sON=1;
    for(int i=2;i*i<=a;i++)
    {
            if (a%i==0) sON=0;
            }
    return sON;
}

void in()
{
     ifstream cin("F.in");
       cin>>x;
}
 
void solution()
{
     for(int i=2;i*i<=x;i++)
       {
             if (x%i==0) {
                         if (simpleOrNot(i)==1) {
                               arr[ind]=i;
                               ind++;
                               }
                         }
               
               }
}

void out()
{
     ofstream cout("F.out");
       for(int i=0;i<ind;i++)
       {
               cout<<arr[i]<<"\n";
               }
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
