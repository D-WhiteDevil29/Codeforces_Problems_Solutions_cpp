/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S)
{
    if (S.length() == 0)
        return 0;
    int n = S.length();
    set<char> st;
    int len = 1;
    st.insert(S[0]);
    int i = 1;
    int maxLen = 0;
    while (i < n)
    {
        if (S[i] != S[i - 1] && st.find(S[i]) == st.end())
        {
            st.insert(S[i]);
            len++;
            i++;
            if (len > maxLen)
            {
                maxLen = len;
            }
        }
        else
        {
            if (len == 1)
            {
                i++;
            }
            else
            {
                st.clear();
                i = i - len + 1;
                len = 0;
            }
        }
    }
    return max(maxLen, len);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<longestSubstrDistinctChars(s);
	}
	cout<<endl;
	return 0;
}
