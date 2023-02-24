/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;
bool checker(map<char,int> mp)
{
	bool flag = false;
	for(auto i:mp)
	{
		if(i.second!=0)
		{
			flag = false;
			break;
		}
		else
		{
			flag = true;
		}
	}
	return flag;
}

int main()
{
	map<char,int> mp;
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	bool flag = true;
	int l1 = s1.length(),l2=s2.length(),l3=s3.length();
	for(int i=0;i<l1;i++)
	{
		mp[s1[i]]++;
	}
	for(int i=0;i<l2;i++)
	{
		mp[s2[i]]++;
	}
	for(int i=0;i<l3;i++)
	{
		if(mp[s3[i]]!=0)
		{
			mp[s3[i]]--;
			flag = true;
		}
		else
		{
			flag = false;
			break;
		}
	}
	bool res = checker(mp);
	string ans = (flag == true && res == true ) ? "YES":"NO";
	cout<<ans;
	cout<<endl;
	return 0;
}