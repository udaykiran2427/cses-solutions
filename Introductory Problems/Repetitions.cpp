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
    string s;
    cin >> s;
    ll ans = 0;
    ll count = 1;
    ll n = s.length();
    for (ll i = 0; i < n - 1; i++)
    {

        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            ans = max(count, ans);
            count = 1;
        }
    }
    ans = max(count, ans);
    cout << ans << endl;
    // code here
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