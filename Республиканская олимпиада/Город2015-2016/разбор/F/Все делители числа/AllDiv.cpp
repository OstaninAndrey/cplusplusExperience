
// количество делителей любого числа-(степени простых делителей +1) и перемножить

#include<iostream>

using namespace std;

int A, ind;
int arr[10+3];
long long ans=1;

void forI(int i)
{
    while (A%i==0) 
    {
        arr[ind]++;
        A=A/i;
    }
    if (arr[ind]!=0) ind++;
}
 
void forOther()
{
    for(int i=3; i*i<=A; i+=2) forI(i);
}

void mul()
{
	for(int i=0;i<=ind;i++) ans*=arr[i]+1;
}

void in()
{
	cin>>A;
}


void solution()
{
	forI(2);
    forOther();
	if (A!=1) 
	{
		arr[ind]=1;
	}
	mul();
}

void out()
{
	cout<<ans;
}

int main()
{
	in();
	solution();
	out();
	return 0;
}

