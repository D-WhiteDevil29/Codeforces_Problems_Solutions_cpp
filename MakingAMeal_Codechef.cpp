/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		string s;
		map<char,int> mp;
		mp.clear();
		for(int i=0;i<n;i++)
		{
			cin>>s;
			int len = s.length();
			for(int i=0;i<len;i++)
			{
				mp[s[i]]++;
			}
		}
		int c=mp['c']/2,o=mp['o']/1,d=mp['d']/1,e=mp['e']/2,h=mp['h']/1,f=mp['f']/1;
		int arr[6];
		arr[0] = c;
		arr[1]= o;
		arr[2]= d;
		arr[3]= e;
		arr[4]= h;
		arr[5]= f;
		int m=INT_MAX;
		for(int i=0;i<6;i++)
		{
			if(arr[i]<m)
			{
				m = arr[i];
			}
		}
		cout<<m<<endl;
    }
	cout<<endl;
	return 0;
}