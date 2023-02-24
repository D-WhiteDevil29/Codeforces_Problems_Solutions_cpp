/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,t;
	cin>>s>>t;
	int lenS = s.length();
	int lenT = t.length();
	int x=0,idx = 0;
	for(int i=0;i<lenT;i++)
	{
		if(s[x] == t[i] && x<lenS)
		{
			x++;
			
		}
		idx = x+1;
	}
	cout<<idx;
	cout<<endl;
	return 0;
}