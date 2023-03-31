/* Ganapati Bappa Morya */
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pi 3.141592653
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, x) for (auto i = x.begin(); it != x.end(); it++)
#define fa(i, V) for (auto i : V)
#define fo(i, n) for (int i = 0; i < n; i++)
#define foL(i, n) for (LL i = 0; i < n; i++)
#define sortAasc(A, n) sort(A, A + n)
#define sortAdesc(A, n) sort(A, A + n, greater<>())
#define sortAsc(V) sort(V.begin(), V.end())
#define sortDesc(V) sort(V.rbegin(), V.rend())
typedef pair<int, int> pii;
typedef pair<LL, LL> pl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    LL t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string s;
        cin >> s;
        vector<int> Z, NZ;
        vector<int> tot;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                Z.pb(arr[i]);
            }
            else
            {
                NZ.pb(arr[i]);
            }
        }
        sortAsc(Z);
        sortAsc(NZ);
        for (auto i : Z)
        {
            tot.pb(i);
        }
        for (auto i : NZ)
        {
            tot.pb(i);
        }
        map<int, int> Mp;
        int j = 1;
        cout << "\ntot array :";
        for (auto i : tot)
        {
            Mp[i] = j;
            j++;
            cout << i << " ";
        }
        cout << "\nFinal ans: ";
        for (auto i : arr)
        {
            cout << Mp[i] << " ";
        }
        cout << '\n';
    }
    cout << endl;
    return 0;
}