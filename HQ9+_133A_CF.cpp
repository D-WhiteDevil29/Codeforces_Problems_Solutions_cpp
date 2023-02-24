/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	bool flag = false;
	int len = s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
		{
			flag = true;
			break;
		}
		else
		{
			flag = false;
		}
	}
	string ans = (flag==true)? "YES":"NO";
	cout<<ans;
	cout<<endl;
	return 0;
}