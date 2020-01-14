#include<iostream>
#include<fstream>

using namespace std;

int a=0,b=0;
int mcd=1;
int k=0;
int mas[35],j=0;

int gcd(int a,int b)
{
    int ans=0,c=0;
    if (b>a) {c=b;b=a;a=c;}
    while(a%b!=0)
    {
                 b=a%b;
                 ans=b;
                 a=ans;
    } 
    
    return ans;
}

void in()
{
 //    ifstream cin("mcd.in");
     cin>>a>>b;
}

void solution()
{
	// 1)находим НОД ( функ. gcd() )
    k=gcd(a,b);
	// 2)находим все простые множители НОД'а , записываем в массив							
    for(int i=2;i*i<k;i++)					
    {
             if (k%i==0) {
                         mas[j]=k/i;
                         j++;
                         }
    }
    // 3) смотрим все возможные варианты перемножения и ищем с наибольшей суммой цифр в варианте						
	
             
}
     
void out()
{
  //   ofstream cout("mcd.out");
     cout<<mcd<<"\n";
}

int main()
{
    in();
    solution();
    out();
    system("pause");
}
