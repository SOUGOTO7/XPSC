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
    vector<ll>a(n);
    vector<ll>b(n);
    ll min1 = (ll)1e18;
    ll min2 = (ll) 1e18;
    ll sum1 = 0;
    ll sum2 = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        min1 = min(min1,a[i]);
        sum1+=a[i];
    }
    for(int i = 0;i<n;i++)
    {
        cin>>b[i];
        min2 = min(min2,b[i]);
        sum2+=b[i];
    }
    //cout<<min1<<" "<<min2<<"\n";
    sum1+= (min2*n);
    sum2+= (min1*n);
    ll ans = min(sum1,sum2);
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