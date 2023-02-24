/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	bool flag = 0;
	int len = s.length()-1;
	while(len--)
	{
		if(s[len]!='?' || s[len]!=' ')
		{
			if(s[len]=='a' || s[len]=='e' || s[len]=='i'|| s[len]=='o' || s[len]=='u' || s[len]=='y')
			{
				cout<<"YES";
				flag = 1;
				break;
			}
			else if(s[len]=='A' || s[len]=='E' || s[len]=='I'|| s[len]=='O' || s[len]=='U' || s[len]=='Y')
			{
				cout<<"YES";
				flag = 1;
				break;
			}
			else if(flag ==0 && s[len]!=' ')
			{
				cout<<"NO";
				break;
			}
		}
	}
	/*if(flag==0)
	{
		cout<<"NO";
	}*/
	cout<<endl;
	return 0;
}