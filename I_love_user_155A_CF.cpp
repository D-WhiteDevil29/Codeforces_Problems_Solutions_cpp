/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,maxN=INT_MIN,minN=INT_MAX,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		if(i==0)
		{
			minN = num;
		    maxN = num;
		}
		if(num > maxN)
		{
			maxN = num;
			cnt++;
		}
		else if(num < minN)
		{
			minN = num;
			cnt++;
		}
	}
	cout<<cnt;
	cout<<endl;
	return 0;
}