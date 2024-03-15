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
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    for(ll i = 0;i<n;i++)
        cin>>a[i];
    
    for(ll i = 0;i<n;i++)
        cin>>b[i];

    ll mx = 0;
    ll c = 1;
    ll x = 0;
    map<ll,ll>mp;
    //mp[a[0]] = 1;
    while(x<n-1)
    {
        if(a[x] == a[x+1])
        {
            c++;
            x++;
            continue;
        }
       // mx = max(mx,mp[a[x]]);
        mp[a[x]] = max(mp[a[x]],c);
        c = 1;
        x++;
    }
    mp[a[n-1]] = max(mp[a[n-1]],c);
    c = 1;
    x = 0;
    //ll mx1 = 0;
    map<ll,ll>mp1;
  //  mp1[b[0]] = 1;
    while(x<n-1)
    {
        if(b[x] == b[x+1])
        {
            c++;
            x++;
            continue;
        }
        //mx1 = max(mx1,c);
        mp1[b[x]] = max(mp1[b[x]],c);
        c = 1;
        x++;
    }
   // mx1 = max(c,mx1);
    //cout<<mx+mx1<<"\n";
    mp1[b[n-1]] = max(mp1[b[n-1]],c);
    for(ll i = 1;i<=2*n;i++)
    {
        mx = max(mp[i]+mp1[i],mx);
    }
    cout<<mx<<"\n";
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