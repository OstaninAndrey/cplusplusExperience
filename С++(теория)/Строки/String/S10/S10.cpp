#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>

using namespace std;

string str1, str2;
int num1, num2;
int length1,length2;
bool ans = 0;

void in()
{
//    ifstream cin("input.txt");	
	getline(cin,str1);
	getline(cin,str2);
}

void solution()
{
     length1=str1.length();
     length2=str2.length();
	 for(int i=0;i<=(length2-length1);i++)
	 {
            if (str2.substr(i,length1)==str1) ans=1;            
            }
}

void out()
{
    //ofstream cout("output.txt");
    // 1)
    // if (str2.find(str1)<=(str2.length()-str1.length())) cout<<"yes";
    // else cout<<"no";
    // 2)
    //if (ans==1) cout<<"yes";
    //else cout<<"no";
}

int main()
{
	in();
	solution(); // 2-comment;1-uncomment
	out();
	return 0;
}


