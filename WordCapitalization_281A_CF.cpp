/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	transform(s.begin(),s.begin()+1,s.begin(),::toupper);
	cout<<s;
	cout<<endl;
	return 0;
}