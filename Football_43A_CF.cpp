/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++)
	{
    	string s;
    	cin>>s;
    	mp[s]++;
    }
    string s;
    int f=INT_MIN;
    for(auto it:mp){
        if(it.second>f){
            f = it.second;
            s = it.first;        }
    }
	cout<<s<<endl;
	return 0;
}
