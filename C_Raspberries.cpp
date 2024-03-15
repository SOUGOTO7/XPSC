#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans = LLONG_MAX;
    for(ll i =0;i<n;i++)
    {
        if(a[i]%k == 0)
        {
            ans = 0;
            break;
        }
        ll div = a[i]/k;
        ll cur = (div+1)*k;
        ll now = cur-a[i];
        ans = min(ans,now);
    }
    if(k == 4)
    {
        ll e = 0,o= 0;
        for(ll i =0;i<n;i++)
        {
            if(a[i]%2)
                o++;
            else
                e++;
        }
        if(e>=2)
            ans = 0;
        if(o>=2)
        {
            ans = min(ans,(ll)2);
        }
        if(e == 1 || o == 1)
        {
            ans = min(ans,(ll)1);
        }
    }
    cout<<ans<<"\n";
}
 
int main()
{
    fastread();
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
     
    return 0;
}