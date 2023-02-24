/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int toast = (k*l)/nl;
	int limes = (c*d);
	int salt = (p/np);
	int ans = (min(min(toast,limes),salt))/n;
	cout<<ans;
	cout<<endl;
	return 0;
}