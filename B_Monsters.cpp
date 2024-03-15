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
bool cmp(pii a,pii b)
{
    if(a.first ==  b.first)
        return a.second < b.second;
    if(a.first == 0 || b.first == 0)
        return a.first<b.first;
    return a.first > b.first;
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<pii>a(n);
    for(ll i = 0;i<n;i++)
    {
        ll x;
        cin>>x;
        a[i] = {x%m,i+1};
    }
    sort(a.begin(),a.end(),cmp);
    for(ll i =0;i<n;i++)
    {
        cout<<a[i].second<<" ";
    }
    cout<<"\n";
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