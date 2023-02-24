/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,digit,count,ans,val;
    cin>>num;
    set<int> s;
    int i=num+1;
    while(i>num)
    {
        count = 0;
        val = i;
        s.clear();
        while(val>0)
        {
            digit = val % 10;
            count++;
            s.insert(digit);
            val = val / 10;
        }
        int size = s.size();
        if(count==size)
        {
            ans = i;
            break;
        }
        i++;
    }
    cout<<ans<<endl;

    return 0;
}
