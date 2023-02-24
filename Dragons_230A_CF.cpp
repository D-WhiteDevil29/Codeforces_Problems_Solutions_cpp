/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;
bool compare ( pair <int, int> &a, pair <int, int> &b ){
   return a.first < b.first;
}
int main()
{
    int s,n;
    cin>>s>>n;
    int pow;
    vector<pair<int,int>> vp;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	vp.push_back(make_pair(a,b));
	}
	sort(vp.begin(),vp.end());
	pow = s;
	for(auto it:vp)
	{
		if(pow > it.first)
		{
			pow += it.second;
			flag = true; 
		}
		else
		{
			flag = false;
			break;
		}
	}
	string res = (flag==true) ? "YES":"NO";
	cout<<res;
	cout<<endl;
	return 0;
}