/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<char> S;
	string s;
	cin>>s;
	int len = s.length();
	for(int i=0;i<len;i++)
	{
		S.insert(s[i]);
	}
	int size = S.size();
	string ans = (size % 2 == 0) ? "CHAT WITH HER!":"IGNORE HIM!";
	cout<<ans;
	cout<<endl;
	return 0;
}