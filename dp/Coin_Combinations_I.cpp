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
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    vector<int> dp(x + 1);
    dp[0] = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (c[j] <= i)
            {
                dp[i] = (dp[i] + dp[i - c[j]]) % MOD;
            }
        }
    }
    cout << dp[x] << endl;
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