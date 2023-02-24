/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int len = s1.length();
	char s3[len];
	memset(s3,'0',sizeof(s3));
	for(int i=0;i<len;i++)
	{
		if(s1[i]==s2[i])
		{
			s3[i]='0';
		}
		else
		{
			s3[i]='1';
		}
	}
	for(int i=0;i<len;i++)
	{
		cout<<s3[i];
	}
	cout<<endl;
	return 0;
}