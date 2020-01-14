#include<iostream>
#include<fstream>
#include<string>

using namespace std;

string str1,str2;
int numOfLet1,numOfLet2;
int ind1=0,ind2=0,temp=0,k=0;
int ans=0;

void in()
{
     ifstream cin("A.in");
     cin>>str1>>str2;    
}
 
void solution()
{
     numOfLet1=str1.length();
     numOfLet2=str2.length();
     if (numOfLet1>numOfLet2)
     {      
     for(int i=0;i<numOfLet1;i++)
     {
             ind1=i;
             for(int j=0;j<numOfLet2;j++)
             {
                     
                     if (str1[ind1]==str2[j]) {
                                                  ind2=j;
                                                  for(;;)
                                                  {
                                                       if (temp>=numOfLet2) break;
                                                       if (str1[ind1]==str2[ind2]) 
                                                       {
                                                                             temp++;
                                                                             ind1++;
                                                                             ind2++;
                                                                             
                                                                             }
                                                       else break;
                                                  }
                                                  if (ans<temp) {ans=temp;}
                                                  temp=0;
                                                  j+=temp;
                                              }        
                      
                       }
             }
     }
     else {
           for(int i=0;i<numOfLet2;i++)
     {
             ind1=i;
             for(int j=0;j<numOfLet1;j++)
             {
                     
                     if (str2[ind1]==str1[j]) {
                                                  ind2=j;
                                                  for(;;)
                                                  {
                                                       if (temp>=numOfLet1) break;
                                                       if (str2[ind1]==str1[ind2]) 
                                                       {
                                                                             temp++;
                                                                             ind1++;
                                                                             ind2++;
                                                                             
                                                                             }
                                                       else break;
                                                  }
                                                  if (ans<temp) {ans=temp;}
                                                  temp=0;
                                                  j+=temp;
                                              }        
                      
                       }
             }
          }
}

void out()
{
     ofstream cout("A.out");
       cout<<ans<<"\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
