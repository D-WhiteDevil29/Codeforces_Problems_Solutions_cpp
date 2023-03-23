/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pi 3.141592653
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x) memset(x,0,sizeof(x))
#define tr(it,x) for(auto i=x.begin(); it != x.end(); it++)
#define endl "\n"
#define fa(i,V) for(auto i:V)
#define fo(i,n) for(int i=0;i<n;i++)
#define foL(i,n) for(LL i=0;i<n;i++)
#define sortAasc(A,n) sort(A,A+n)
#define sortAdesc(A,n) sort(A,A+n,greater<>())
#define sortAsc(V) sort(V.begin(),V.end())
#define sortDesc(V) sort(V.rbegin(),V.rend())
typedef pair<int,int> pii;
typedef pair<LL,LL> pl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;


int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int A[n],B[n];
    	map<int,int>mp;
    	bool flag = false;
    	fo(i,n){
    		cin>>A[i];
    		mp[A[i]]++;
		}
		fo(i,n){
			cin>>B[i];
		}
		fo(i,n){
			if(B[i]!=A[i] && (i>0 && i<n-1)){
				if(A[i]==0){
					if(mp[1]>0){
						flag = true;
					}
					else{
						flag = false;
						break;
					}
				}
				if(A[i]==1){
					flag = false;
					break;
				}
			}
			else if(A[i]==B[i]){
				flag = true;
			}
			else
			{
				flag = false;
				break;
			}
		}
		string ans = (flag==true) ? "YES" : "NO";
		cout<<ans<<endl;
	}
	cout<<endl;
	return 0;
}

