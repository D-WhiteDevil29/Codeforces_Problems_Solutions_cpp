/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len = s.length();
	int size = (len/2)+1;
	vector<char> V;
	for(int i=0;i<len;i++)
	{
		if(s[i]!='+')
		{
			V.push_back(s[i]);
		}
	}
	sort(V.begin(),V.end());
	for(int i=0;i<size;i++)
	{
		if(i<size-1)
		{
			cout<<V[i]<<"+";
		}
		else
		{
			cout<<V[i];
		}
	}
	cout<<endl;
	return 0;
}