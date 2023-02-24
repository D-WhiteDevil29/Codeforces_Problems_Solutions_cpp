/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n],sum=0,maxval=0,j,s[3],index;
	memset(s,0,sizeof(s));
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<3;i++)
	{
		j = i;
		sum = 0;
		while(j<n)
		{
			sum = arr[j] + sum;
			j += 3;
		}
		s[i] = sum;
		//cout<<sum<<endl;
	}
	for(int i=0;i<3;i++)
	{
		if(maxval<s[i])
		{
			maxval = s[i];
			index = i+1;
		}
	}
	if(index==1)
	{
		cout<<"chest";
	}
	else if(index==2)
	{
		cout<<"biceps";
	}
	else
	{
		cout<<"back";
	}
	cout<<endl;
	return 0;
}