/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len = s.length(),cC=0,cS=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			cC++;
		}
		else if(s[i]>='a' && s[i]<='z')
		{
			cS++;
		}
	}
	if(cC>cS)
	{
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	else
	{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	cout<<s;
	cout<<endl;
	return 0;
}