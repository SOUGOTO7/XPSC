#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(0), cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9 + 7;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 1;
    ll a[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    vector<ll>v;
    ll l = 0,r = n-1;
    for(int i =0 ;i<n;i++)
    {
        if(s[i] == 'L')
            v.push_back(a[l++]);
        else
            v.push_back(a[r--]);
    }
    reverse(v.begin(),v.end());
    vector<ll>main;
    for(ll x: v)
    {
        ans*=x;
        ans%=m;
        main.push_back(ans);
    }
    reverse(main.begin(),main.end());
    for(ll x: main)
        cout<<x<<" ";
    cout<<"\n";

}

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}