#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<pair<int,int>> vp;
	for(int i=0;i<n;i++)
	{
		vp.push_back(make_pair(arr[i],i));
	}
	sort(vp.begin(),vp.end());
	int ele,count = 0,diff=0,fdiff = 0,num;
	map<int,int> mp;
	vector<int> v;
	map<int, int>::iterator itr;
	for(int i=0;i<n;i++)
	{
		if(vp[i].first == vp[i+1].first)
		{
			count++;
			diff = vp[i+1].second - vp[i].second;
				if(diff == fdiff)
				{
					ele = vp[i].first;
					mp[ele]=fdiff;
					num = vp[i].first;
				}
				else
				{
					if(vp[i].first == vp[i-1].first && count > 1)
					{
						v.push_back(vp[i].first);
					}
					else
					{
						fdiff = diff;
						mp[vp[i+1].first] = fdiff;
					}			
				}
		}
		else
		{
			count = 0;
			if(vp[i-1].first != vp[i].first)
			{
				mp[vp[i].first] = 0;
			}
			diff = 0;
		}
	}
	for(auto i:v)
	{
		mp.erase(i);
	}
	cout<<mp.size()<<endl;
	for(itr= mp.begin(); itr != mp.end() ;itr++)
	{
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	return 0;
}