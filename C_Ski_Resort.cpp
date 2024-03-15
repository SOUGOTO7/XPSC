#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define  ll  long long
#define pii pair<ll,ll>
#define fastread() (ios_base::sync_with_stdio(0),cin.tie(0));
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9+7;
void solve()
{
    ll n,k,q;
    cin>>n>>k>>q;
    ll ar[n];
    for(ll i =0;i<n;i++)
        cin>>ar[i];
    ll j = 0,i = 0;
    ll c = 0;
    ll ans = 0;
    multiset<ll>m; 
    while(j<n)
    {
        m.insert(ar[j]);
        if(j<k-1)
        {
            j++;
            continue;
        }
        ll now = *m.rbegin();
        if(now<=q)
            c++;
        else
        {
            ans+=(c*(c+1))/2;
            c = 0;
        }
        m.erase(m.find(ar[i]));
        i++;
        j++;
    }
    ans+=(c*(c+1))/2;
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