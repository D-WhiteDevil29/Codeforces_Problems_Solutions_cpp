/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s,s1,s2;
	cin>>s>>s1;
	s2 = s;
	int len = s.length();
	for(int i=0;i<len/2;i++)
	{
		char c = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = c;
	}
	if(s == s1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	cout<<endl;
	return 0;
}