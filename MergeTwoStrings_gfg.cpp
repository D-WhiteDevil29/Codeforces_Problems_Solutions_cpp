/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;
string merge(string S1, string S2)
{
	int s1=S1.length(),s2=S2.length(),size;
	string result="";

	for (int i = 0; i < s1 || i < s2; i++) 
    { 
        if (i < s1){
        	result += S1[i];
		}
        if (i < s2){
        	result += S2[i];
	    } 
    } 
	return result;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    cout<<merge(s1,s2);
	cout<<endl;
	return 0;
}
