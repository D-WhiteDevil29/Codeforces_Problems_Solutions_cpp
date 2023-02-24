/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	int c1=0,c2=0,sum1=0,sum2=0;
	cin>>s1>>s2;
	int len = s1.length();
	for(int i=0; i<len; i++)
	{
	   if(tolower(s1[i]) > tolower(s2[i]))
	   {
		  c1++;
		  break;
	   }
	   else if(tolower(s1[i]) < tolower(s2[i]))
	   {
		  c2++;
		  break;
	   }
	   else
	   {
		  c1 = c1;
		  c2 = c2;
	   }	
	}
	if(c1>c2)
	{
		cout<< "1";
	}
	else if(c1<c2)
	{
		cout<< "-1";
	}
	else
	{
		cout<< "0";
	}
	cout<<endl;
	return 0;
}