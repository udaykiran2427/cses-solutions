#include <bits/stdc++.h>
using namespace std;
// convenience
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define F first
#define S second
#define sz(x) (int)(x).size()

// constants
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void solve()
{
    // code here
    int n;
    cin >> n;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool flag = false;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (i + 1 != a[i])
        {
            flag = true;
            ans = i + 1;
            break;
        }
    }
    if (flag)
        cout << ans << endl;
    else
        cout << n << endl;
}
int main()
{
    fastio;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}