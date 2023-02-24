/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int sum=0,count=0;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		sum += num;
	}
	int pos = (sum%(n+1));
	for(int i=1;i<=5;i++)
	{
		pos = pos + 1;
		if(pos>n+1)
		{
			pos = 1;
		}
		else if(pos!=1)
		{
			count++;
		}
	}
	cout<<count;
	cout<<endl;
	return 0;
}