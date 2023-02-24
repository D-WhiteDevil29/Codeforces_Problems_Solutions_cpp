/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		map<long long int,long long int> mp;
		bool flag = false;
		mp.clear();
		for(int i=0;i<2*n;i++)
		{
			long long int num;
			cin>>num;
			flag = true;
			mp[num]++;
		}
		for(auto i:mp)
		{
			if(i.second>2)
			{
				flag = false;
				break;
			}
		}
		if(flag == false)
		{
			cout<<"No";
		}
		else
		{
			cout<<"Yes";
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}