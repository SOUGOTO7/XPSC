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
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.second == b.second)
        return a.first > b.first;
    return a.second < b.second;
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],b[n];
    for(ll i =0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(ll i =0;i<n;i++)
    {
        cin>>b[i];
    }

    vector<pair<ll,ll>>v(n);
    for(ll i =0;i<n;i++)
    {
        v[i] = {a[i],b[i]};
    }
    sort(v.begin(),v.end(),cmp);
    ll cost = m;
    ll i = 0;
    n--;
    while(n>0)
    {
        if(v[i].second <= m)
        {
            if(n>=v[i].first)
            {
                cost+=(v[i].first*v[i].second);
                n-=v[i].first;
            }
            else
            {
                cost+=(n*v[i].second);
                n = 0;
            }
        }
        else
        {
            cost+=m;
            n--;
        }
        i++;
    }
    cout<<cost<<"\n";
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