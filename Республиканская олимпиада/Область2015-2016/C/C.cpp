#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int m;
pair <string,int> arr[1000+5];
string str;

int ind=0,ind1=0,f=-1;
string subStr="",compare="";
int ans[1000+5];

int findComb(string str)
{
    for(int i=0;i<m;i++)
    {
            if (str==arr[i].first) return arr[i].second;
    }
    return 0;
}

void in()
{
     ifstream cin("C.in");
     cin>>m;
     for(int i=0;i<m;i++)
     {
             cin>>arr[i].first>>arr[i].second;
     }
     cin>>str;
}
 
void solution()
{
     while(f!=0)
     {
              subStr+=str[ind];
              f=findComb(subStr);
              if (findComb(subStr+str[ind+1])==0 && f!=0) 
              {
                        ans[ind1]=f;
                        ind1++;
                        compare+=subStr;
                        subStr="";
              }             
              ind++;       
     }
}

void out()
{
     ofstream cout("C.out");
     for(int i=0;i<ind1;i++)
     {
             cout<<ans[i]<<"\n";
     }
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
