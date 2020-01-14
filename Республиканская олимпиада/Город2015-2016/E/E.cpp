#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int null=0;
int ch=0;
string arr[31];
int ind=0;
int temp=0;

void lessThenTen()
{
     for(int i=0;i<ch;i++)
     {
             arr[i]="ADD";
             }
     ind=ch;
 }

void fromTenToHun()
{
     while(null<=ch/10)
     {
        null++;
        arr[ind]="ADD";
        ind++;            
                    }
     null=(null-1)*10;
     arr[ind]="MUL";
     ind++;
     for(int i=0;i<ch-null;i++)
     {
             arr[ind]="ADD";
             ind++;
             }
 }
 
void moreThenHun()
{
     while(null<=ch/100)
     {
                        
                        arr[ind]="ADD";
                        ind++;
                        null++;
                        }
     null=(null-1)*10;
     arr[ind]="MUL";
     ind++;
     while(null<=ch/10)
     {
                       null++;
                       arr[ind]="ADD";
                       ind++;
                       }
     null=(null-1)*10;
     arr[ind-1]="MUL";
     for(int i=null;i<ch;i++)
     {
             arr[ind]="ADD";
             ind++;
             null++;
             }
                        
 }

void in()
{
     ifstream cin("E.in");
     cin>>ch;  
}
 
void solution()
{
     arr[0]=="ADD";
     null++;
     ind++; 
     if (ch<10) {lessThenTen();}
     if ((ch>=10)&&(ch<=99)) {fromTenToHun();}
     if ((ch>=100)&&(ch<=999)) {moreThenHun();}
     if (ch==1000) {
                   arr[0]="ADD";
                   arr[1]="MUL";
                   arr[2]="MUL";
                   arr[3]="MUL";
                   ind =4;
                   }
}

void out()
{
     ofstream cout("E.out");
     if (ch<10){
                for(int i=0;i<ind;i++)
                 {
                        cout<<arr[i];
                        cout<<"\n";
                        }  
                }
     else
     {
         for(int i=1;i<ind;i++)
         {
             cout<<arr[i];
             cout<<"\n";
             }
     }
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
