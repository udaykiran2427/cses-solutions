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
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    vector<vector<int>> dp(n + 1, vector<int>(x + 1));
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= x; j++)
        {
            int np = dp[i + 1][j];
            int p = 0;
            if (c[i] <= j)
            {
                p = dp[i][j - c[i]];
            }
            dp[i][j] = (np + p) % MOD;
        }
    }
    cout << dp[0][x] << endl;
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