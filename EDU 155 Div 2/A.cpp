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
    ll n;
    cin>>n;
    vector<pair<ll,ll>>a(n);
    for(int i = 0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        a[i] = {x,y};
    }
    ll mx_weight = -1;
    ll e = a[0].second;
    for(int i = 1;i<n;i++)
    {
        if(a[i].second >= e)
            mx_weight = max(mx_weight,a[i].first);
    }
    if(mx_weight == -1)
    {
        cout<<a[0].first<<"\n";
        return;
    }
    mx_weight++;
    ll w = a[0].first;
    if(w >= mx_weight)
    {
        cout<<mx_weight<<"\n";
    }
    else
        cout<<-1<<"\n";
    
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